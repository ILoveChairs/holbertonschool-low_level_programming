#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


/**
 * _strlen - Gets len of str.
 *
 * @str: String
 *
 * Return: Len.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}


/**
 * _error - asdfg
 *
 * @errno: asdfg
 */
void _error(int errno)
{
	char error[4][64] = {
		"Usage: cp file_from file_to\n",
		"Error: Can't read from file NAME_OF_THE_FILE",
		"Error: Can't write to NAME_OF_THE_FILE",
		"Error: Can't close fd FD_VALUE"};

	if (errno < 97 || errno > 100)
	{
		write(STDERR_FILENO, "_error Error: errno Error.\n", 27);
		exit(22);
	}
	write(STDERR_FILENO, error[errno - 97], _strlen(error[errno - 97]));
	exit(errno);
}

/**
 * _flush_buffer - Replaces all chars of buffer to 0.
 *
 * @buffer: Buffer
 */
void _flush_buffer(char *buffer)
{
	while (*buffer)
		*buffer++ = 0;
}

/**
 * cp - Does the copy with a 1024 buffer
 *
 * @rfd: Read file descriptor.
 *
 * @wfd: Write file descriptor.
 */
void cp(int rfd, int wfd)
{
	ssize_t bytes_wrote;
	ssize_t bytes_read;
	char buffer[1024];

	while (1)
	{
		_flush_buffer(buffer);

		bytes_read = read(rfd, buffer, 1024);
		if (bytes_read == -1)
			_error(98);

		if (bytes_read == 0)
			break;

		bytes_wrote = write(wfd, buffer, bytes_read);

		if (bytes_read != bytes_wrote)
			_error(99);

		if (bytes_read < 1024)
			break;
	}
}


/**
 * main - Copies file content of arg1 to arg2 which are file names.
 *
 * @argc: n of args.
 *
 * @argv: arg list
 *
 * Return: 0 if successful, _error if failure.
 */
int main(int argc, char **argv)
{
	int rfd;
	int wfd;

	if (argc != 3)
		_error(97);

	rfd = open(argv[1], O_RDONLY);
	if (rfd == -1)
		_error(98);

	wfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IWUSR + S_IRUSR + S_IRGRP + S_IWGRP + S_IROTH);
	if (wfd == -1)
		_error(99);

	cp(rfd, wfd);

	rfd = close(rfd);
	wfd = close(wfd);
	if (rfd == -1 || wfd == -1)
		_error(100);

	return (0);
}











