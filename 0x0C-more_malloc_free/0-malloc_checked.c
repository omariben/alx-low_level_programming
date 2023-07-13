#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Entry point
 * @b: size of the integer
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *memory = malloc(b);

if (memory == NULL)
{
exit(EXIT_FAILURE);
}
return (memory);
}
