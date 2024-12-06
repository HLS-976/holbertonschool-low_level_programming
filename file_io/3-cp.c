#include "main.h"

/**
 * copy_file - Copy the source file to destination
 * @file_from: source file
 * @file_to: destination
 *
 * Return: 0 on succeed, exit with error code
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	char c;

	if (!file_from || !file_to)
		exit(dprintf(STDERR_FILENO, "Error: Invalid file name\n"), 97);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit(dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					file_from), 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit(close(fd_from),
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), 99);

	while (read(fd_from, &c, 1) > 0)
		if (write(fd_to, &c, 1) == -1)
			exit(close(fd_from), close(fd_to),
					dprintf(STDERR_FILENO,
						"Error: Can't write to %s\n",
						file_to), 99);

	if (close(fd_from) == -1)
		exit(dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", fd_from), 100);

	if (close(fd_to) == -1)
		exit(dprintf(STDERR_FILENO,
					"Error: Can't close fd %d\n", fd_to), 100);
}

