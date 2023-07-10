#include <stdlib.h>
/**
 * free_grid - prints a grid of integers
 * @height: height of the grid
 * @grid: the address of the two dimensional grid
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL)
{
return; /* nothing to free */
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
