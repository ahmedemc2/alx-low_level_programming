#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: the number of columns
 * @height: the number of rows
 *
 * Return: NULL on failure or (if width or height is 0 or negative)
*/

int **alloc_grid(int width, int height)
{
	int **mat, i, j;

	mat = malloc(width * height * sizeof(int));

	if (width <= 0 || height <= 0 || mat == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		mat[i] = malloc(sizeof(**mat) * width);
		if (mat[i] == 0)
		{
			while (i--)
				free(mat[i]);
			free(mat);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			mat[i][j] = 0;
	}
	return (mat);
}
