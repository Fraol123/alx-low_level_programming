#include "holberton.h"
#include <stdlib.h>

/**
 *alloc_grid- Returns a pointer to a 2-dimensional array of
 *              integers with each element  intialized to 0.
 *@width: the width of the 2D array
 *@height: the height of the 2D array
 *Return: if width <= 0, height <= 0 or function fails NULL
 * if else- a pointer to the 2D array of integers
 */

int **alloc_grid(int width, int height)
{

	int **twoD;

	int hgt_i, wid_i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	twoD = (int **)malloc(sizeof(int *) * height);

	if (twoD == NULL)
	{
		return (NULL);
	}

	for (hgt_i = 0; hgt_i < height; hgt_i++)
	{
		twoD[hgt_i] = (int *)malloc(sizeof(int) * width);

		for (wid_i = 0; wid_i < width; wid_i++)
		{
			twoD[hgt_i][wid_i] = 0;
		}
	}

	return (twoD);
}
