#include "main.h"

/**
 * _strncpy - copies atmost an inputted number
 * of bytes from src to dest
 * @dest: Buffer storage string copy
 * @src: the source string
 * @n: maximum number of bytes to be copied
 * Return: a pointer to the resulting stringdest
*/

char *_strncpy(char *dest, char *src, int n)
{
int index;
int src_len = 0;

for (index = 0; src[index] != '\0'; index++)
src_len++;

for (index = 0; src[index] != '\0' && index < n; index++)
dest[index] = src[index];

for (; index < n; index++)
dest[index] = '\0';

return (dest);
}

