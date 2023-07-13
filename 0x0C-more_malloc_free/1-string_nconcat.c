#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings, taking at most n bytes from s2
 * @s1: First string
 * @s2: Second string
 * @n: Maximum number of bytes to concatenate from s2
 *
 * Return: Pointer to the concatenated string (s1 followed by at most n bytes
 *         of s2). The returned pointer should be freed when no longer needed.
 *         If allocation fails, returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t len1;
size_t len2;
char *result;

if (s1 == NULL)
{
s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
result = malloc(len1 + n + 1);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}

