#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 taking at most n bytes from s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes in s2
 * return: pointer to newly allocated space in memory
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

