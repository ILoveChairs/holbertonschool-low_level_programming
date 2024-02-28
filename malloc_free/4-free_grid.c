#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include "main.h"
#endif

/**
 * free_grid - asdfg
 * @grid: asdfg
 * @height: asdfg
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = height - 1; i != -1; i--)
	{
		free(grid[i]);
	}
	free(grid);
}
