#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
int **fx;
int x, y;

if (width <= 0 || height <= 0)
return (NULL);

fx = malloc(sizeof(int *) * height);

if (fx == NULL)
return (NULL);

for (x = 0; x < height; x++)
{
fx[x] = malloc(sizeof(int) * width);

if (fx[x] == NULL)
{
for (; x >= 0; x--)
free(fx[x]);

free(fx);
return (NULL);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
fx[x][y] = 0;
}

return (fx);
}

