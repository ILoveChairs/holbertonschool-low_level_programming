#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


/**
 * _itoa - Turns int to newly allocated string.
 *
 * @integer: Integer.
 *
 * Return: Newly allocated string.
 */
char *_itoa(int integer)
{
	char *result;
	int i;
	int len;
	int ends_on_0;

	ends_on_0 = 0;
	len = 0;
	if (integer % 10 == 0)
	{
		len++;
		ends_on_0 = 1;
	}
	for (i = integer; i != 0; i /= 10)
		len++;

	result = malloc(len);
	if (!result)
		exit(96);

	for (i = len - 1; integer != 0; integer /= 10)
		result[i--] = integer % 10 + 48;

	if (ends_on_0)
		result[i++] = 48;

	return (result);
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
		free(arg);
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
		_error(100, _itoa(rfd));
	wfd = close(wfd);
	if (result == -1)
		_error(100, _itoa(wfd));

	return (0);
}











