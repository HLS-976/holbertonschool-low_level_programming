#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * error_exit - Prints an error message and exits the program.
 * @msg: The error message to display.
 * @file: The name of the file causing the error.
 * @code: The exit code to return.
 */
void error_exit(const char *msg, const char *file, int code)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * main - copys the source file at the destination finale
 * @argc: int
 * @argv: char *
 * Return: 0 on succend, or error on failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t rd, wr;
	char buf[1024];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", "", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file %s\n", argv[1], 98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit("Error: Can't write to %s\n", argv[2], 99);
	}

	while (1)
	{
		rd = read(fd_from, buf, 1024);
		if (rd == 0)
			break;
		if (rd == -1)
			error_exit("Error: Can't read from file %s\n", argv[1], 98);

		wr = write(fd_to, buf, rd);
		if (wr == -1 || wr != rd)
			error_exit("Error: Can't write to %s\n", argv[2], 99);
	}

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd %d\n", argv[1], 100);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd %d\n", argv[2], 100);

	return (0);
}
