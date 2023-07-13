#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: lowest value of the integer
 * @max: highest value of the integer
 *
 * Return: Created array
 */
int *array_range(int min, int max)
{
int i;
int size;
int *arr;

if (min > max)
{
return (NULL);
}
size = max - min + 1;
arr = malloc(size * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = min + 1;
}
return (arr);
}
