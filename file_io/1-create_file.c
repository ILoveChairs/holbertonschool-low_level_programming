#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _str_len - asdfg
 *
 * @str: asdfg
 *
 * Return: asdfg
 */
unsigned int _str_len(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}


/**
 * _flush_buffer - asdfg
 *
 * @buffer: asdfg
 */
void _flush_buffer(char *buffer)
{
	while (*buffer)
		*buffer++ = 0;
}

/**
 * _fill_buffer - asdfg
 *
 * @buffer: asdfg
 *
 * @text_content: asdfg
 *
 * Return: asdfg
 */
int _fill_buffer(char* buffer, char *text_content)
{
	unsigned int i;
	unsigned int size;

	size = _str_len(text_content);
	if (size > 1024)
		size = 1024;

	for (i = 0; text_content[i] && i < size; i++)
	{
		buffer[i] = text_content[i];
	}

	return (i);
}

/**
 * _whiler - asdfg
 *
 * @fd: asdfg
 * @buffer: asdfg
 * @letters: asdfg
 *
 * Return: asdfg
 */
ssize_t _whiler(int fd, char *buffer, char *text_content)
{
	ssize_t bytes_wrote;
	ssize_t bytes_read;
	ssize_t wrote_total;

	wrote_total = 0;
	while (1)
	{
		_flush_buffer(buffer);
		bytes_read = _fill_buffer(buffer, text_content + wrote_total);

		bytes_wrote = write(fd, buffer, bytes_read);

		if (bytes_read != bytes_wrote)
			return (-1);

		wrote_total += bytes_wrote;

		if (bytes_read < 1024)
			break;
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
int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT|O_WRONLY|O_TRUNC, O_WRONLY);

	if (fd == -1)
		return (-1);

	buffer = malloc(1024);
	if (!buffer)
	{
		close(fd);
		return (-1);
	}

	_whiler(fd, buffer, text_content);

	close(fd);
	free(buffer);
	return (1);
}
