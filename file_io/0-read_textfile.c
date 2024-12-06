#include "main.h"

/**
 * read_textfile - reads text file and prints it
 * @filename: const char *
 * @letters: size_t
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDes;
	char *buffer;
	ssize_t bytes_read, write_bytes;

	if (filename == NULL)
		return (0);

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
		return (0);

	fileDes = open(filename, O_RDONLY);
	if (fileDes == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_read = read(fileDes, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fileDes);
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buffer, bytes_read);
	if (write_bytes == -1 || write_bytes != bytes_read)
	{
		free(buffer);
		close(fileDes);
		return (0);
	}

	free(buffer);
	close(fileDes);

	return (write_bytes);
}
