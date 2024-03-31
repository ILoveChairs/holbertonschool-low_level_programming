#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

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
	int bytes_read;
	char *buffer;
	ssize_t bytes_wrote;
	ssize_t wrote_total;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(1024);
	if (!buffer)
		return (0);

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
			bytes_wrote = write(1, buffer, letters - wrote_total);

		if (bytes_read != bytes_wrote)
			return (0);

		wrote_total += bytes_wrote;
	}

	close(fd);
	free(buffer);
	return (wrote_total);
}
