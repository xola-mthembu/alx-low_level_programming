#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: If width or height is 0 or negative, or if allocation fails,
 * return NULL. Otherwise, return a pointer to the newly allocated grid.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int i, j;
if (width <= 0 || height <= 0)
return (NULL);
grid = (int **)malloc(height * sizeof(int *));
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = (int *)malloc(width * sizeof(int));
if (grid[i] == NULL)
{
/* Free previously allocated memory and return NULL on failure */
for (j = 0; j < i; j++)
free(grid[j]);
free(grid);
return (NULL);
}
/* Initialize each element of the grid to 0 */
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
