#include "main.h"
int _putchar(char c);

/**
 * print_line - Prints a line of underscores based on parameter n
 * @n: number of times to draw the underscore
 * Return: Empty
*/
void print_line(int n)
{
int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(95);
}
_putchar('\n');
}
}
