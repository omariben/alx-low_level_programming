#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of the string
 * @s: The string to count
 * Return: Integer value
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
