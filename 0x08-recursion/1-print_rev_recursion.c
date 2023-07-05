#include "main.h"

/**
 * void _print_rev_recursion - Prints string in reverse
 * @s: String to be printed
 * Return: Always 0
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
{
_putchar(*s);
s++;
_print_rev_recursion(s);
_putchar(*s);
}
}
