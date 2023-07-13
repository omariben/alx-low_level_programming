#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory to an array
 * @nmemb: size of the integer
 * @size: value of the integer
 * Return: returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memory;

if (nmemb == 0 || size == 0)
{
return (NULL);
}
memory = malloc(nmemb * size);
{
return (NULL);
}
memset(memory, 0, nmemb * size);
{
return (memory);
}
}
