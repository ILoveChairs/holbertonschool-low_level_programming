#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _whiler - asdfg
 *
 * @fd: asdfg
 * @buffer: asdfg
 * @letters: asdfg
 *
 * Return: asdfg
 */
ssize_t _whiler(int fd, char *buffer, ssize_t letters)
{
	ssize_t bytes_wrote;
	ssize_t bytes_read;
	ssize_t wrote_total;

	wrote_total = 0;
	while (1)
	{
		bytes_read = read(fd, buffer, 1024);
		if (bytes_read == -1)
			return (0);

		if (bytes_read == 0)
			break;

		if ((ssize_t)letters > wrote_total + bytes_read)
			bytes_wrote = write(1, buffer, bytes_read);

		else
		{
			bytes_wrote = write(1, buffer, letters - wrote_total);
			break;
		}

		if (bytes_read != bytes_wrote)
			return (0);

		wrote_total += bytes_wrote;
	}

	return (wrote_total);
}

/**
 * read_textfile - asdfg
 *
 * @filename: asdfg
 * @letters: asdfg
 *
 * Return: asdfg
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t wrote_total;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(1024);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	wrote_total = _whiler(fd, buffer, (ssize_t)letters);

	close(fd);
	free(buffer);
	return (wrote_total);
}
