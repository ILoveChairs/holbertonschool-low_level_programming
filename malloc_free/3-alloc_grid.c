#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#endif

/**
 * alloc_grid - asdfg
 * @width: asdfg
 * @height: asdfg
 * Return: asdfg
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;
	int l;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	arr = (int**)malloc(height * sizeof(int*));
	for (i = 0; i < height; i++)
		arr[i] = (int*)malloc(width * sizeof(int));

	if (!arr)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		for (l = 0; l < width; l++)
			arr[i][l] = 0;
	}

	return (arr);
}
