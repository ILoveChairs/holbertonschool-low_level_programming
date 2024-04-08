#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


/**
 * _error100 - Prints error 100
 *
 * @fd: File descriptor
 */
void _error100(int integer)
{
	char error[] = "Error: Can't close fd ";

	write(STDERR_FILENO, error, strlen(error));

	dprintf(STDERR_FILENO, "%d\n", integer);

	exit(100);
}

/**
 * _error - Prints error message and exits with errno flag.
 *
 * @errno: errno.
 *
 * @arg: Print error msg with arg.
 */
void _error(int errno, char *arg)
{
	char error[4][64] = {
		"Usage: cp file_from file_to\n",
		"Error: Can't read from file ",
		"Error: Can't write to ",
		"Error: Can't close fd "};

	if (errno < 97 || errno > 100)
	{
		write(STDERR_FILENO, "_error Error: errno Error.\n", 27);
		exit(22);
	}

	write(STDERR_FILENO, error[errno - 97], strlen(error[errno - 97]));

	if (arg)
	{
		write(STDERR_FILENO, arg, strlen(arg));
		write(STDERR_FILENO, "\n", 1);
	}

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
 *
 * Return: 0 if successful, errno if error.
 */
int cp(int rfd, int wfd)
{
	ssize_t bytes_wrote;
	ssize_t bytes_read;
	char buffer[1024];

	while (1)
	{
		_flush_buffer(buffer);

		bytes_read = read(rfd, buffer, 1024);
		if (bytes_read == -1)
			return (98);

		if (bytes_read == 0)
			break;

		bytes_wrote = write(wfd, buffer, bytes_read);

		if (bytes_read != bytes_wrote)
			return (99);

		if (bytes_read < 1024)
			break;
	}

	return (0);
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
	int result;

	if (argc != 3)
		_error(97, NULL);

	rfd = open(argv[1], O_RDONLY);
	if (rfd == -1)
		_error(98, argv[1]);

	wfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			S_IWUSR + S_IRUSR + S_IRGRP + S_IWGRP + S_IROTH);
	if (wfd == -1)
		_error(99, argv[2]);

	result = cp(rfd, wfd);
	if (result == 98)
		_error(98, argv[1]);
	else if (result == 98)
		_error(99, argv[2]);

	result = close(rfd);
	if (result == -1)
		_error100(rfd);
	wfd = close(wfd);
	if (result == -1)
		_error100(wfd);

	return (0);
}











