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
unsigned int i = 0, j = 0, k = 0, l = 0;
char *str;

if (s1 == NULL)
s1 = " ";
if (s2 == NULL)
s2 = " ";
while (s1[i])
i++;
while (s2[k])
k++;
if (n >= k)
l = i + k;
else
l = i + n;
str = malloc(sizeof(char) * l + n);
if (str == NULL)
return (NULL);
k = 0;
while (j < l)
{
if (j <= i)
str[j] = s1[j];
if (j >= i)
{
str[j] = s2[k];
k++;
}
j++;
}
str[j] = '\0';
return (str);
}
