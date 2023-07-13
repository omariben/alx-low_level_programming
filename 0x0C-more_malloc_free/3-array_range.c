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
int *a, i = 0;

if (min > max)

return (NULL);

a = malloc((sizeof(int) * (max - min)) + sizeof(int));
if (a == NULL)

return (NULL);

while (min <= max)
{
a[i] = min;
i++;
min++;
}
return (a);
}
