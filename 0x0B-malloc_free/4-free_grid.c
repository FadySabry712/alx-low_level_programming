#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees array
 * @grid: param 1
 * @height: param 2
 * Return: void
 */

void free_grid(int **grid, int height)

{
int j;

for (j = 0; j < height; j++)

{

free(grid[j]);
}
free(grid);

}
