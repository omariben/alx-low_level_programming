#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int i;

if (new_size == old_size)
return (ptr);
if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
return (nptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
}
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
nptr[i] = ((char *) nptr)[i];
}
free(ptr);
return (nptr);
}
