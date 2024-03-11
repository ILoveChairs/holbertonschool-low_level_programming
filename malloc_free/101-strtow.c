#ifndef HEADER_FILE
#define HEADER_FILE
#include "main.h"
#endif

/**
 *
 *
 *
 */
int get_len(char *str)
{
	int i;
	int len;
	int flag;

	len = 0;
	flag = 1;
	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (!flag)
			{
				len++;
				flag = 1;
			}
			if (!str[i + 1])
				len--;
		}
		else
		{
			flag = 0;
		}
	}
	return (len + 2);
}

/**
 *
 *
 *
 *
 */
int get_len(char *str)
{
	int i;
	int len;
	int *lens;
	int flag;

	flag = 0;
	i = 0;
	for (len = 0; str[len]; len++)
	{
		if (str[len] == ' ')
		{
			if (flag)
			{
				lens[i] = len;
				len = 0;
				flag = 0;
				i++;
			}
		}
		else
		{
			flag = 1;
			len++;
		}
	}

	if (flag)
	{
		lens[i] = len;
		i++;
	}

	lens[i] = -1;

	return (lens);
}

/**
 *
 *
 *
 *
 */
char **malloc_array(char *str, int len)
{
	int i;
	int *lens;
	char **output;

	output = malloc(len * sizeof(void*));
	if (!output)
		return (NULL);

	lens = get_lens(str);

	for (i = 0; lens[i] != -1; i++)
	{
		output[i] = malloc((lens[i] + 1) * sizeof(char));
		if (!output[i])
		{
			for (; i >= 0; i--)
				free(output[i]);
			free(output);
			return (NULL);
		}
	}

	return (output);
}

/**
 *
 *
 */
char **fill_array(char *str, char **arr)
{
	int i;

	for (i = 0; arr[i]; i++)
	{
		
	}

	return (output);
}

/**
 * strtow - asdfg
 * @str: asdfg
 *
 * Return: asdfg
 */
char **strtow(char *str)
{
	int i;
	char **output;
	int len;

	if (!str || str == "")
		return (NULL);

	len = get_len(str);

	output = malloc_array(str, len);
	if (!output)
		return (NULL);

	output = fill_array(str, output);

	return (output);
}
