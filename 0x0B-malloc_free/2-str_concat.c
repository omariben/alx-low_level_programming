#include <stdlib.h>
#include <string.h>
/**
 * str_concat - oncatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
char s1;
char s2;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

_length = strlen(s1);
_length = strlen(s2);

char *result = (char *) malloc((s1_length + s2_length + 1) * sizeof(char));

if (result == NULL)
return (NULL);

strcpy(result, s1);
strcat(result, s2);

return (result);
}