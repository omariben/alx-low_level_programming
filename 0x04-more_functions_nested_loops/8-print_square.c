#include "main.h"
int _putchar(char c);

/**
 * print_square - Prints n square according to n number of times
 * @size: the size of the square
 * Returns: empty
*/
void print_square(int size)
{
int z, y;

if (size <= 0)
{
_putchar('\n');
}
for (z = 0; z < size; z++)
{
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
