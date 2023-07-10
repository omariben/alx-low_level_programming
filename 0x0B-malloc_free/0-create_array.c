#include <stdlib.h>
/**
 * create_array - entry point
 * @size: Size of the integer
 * @c: character initializing an array
 * Return: Always 0
 */
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

if (size == 0)
return (NULL);

array = (char *) malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
