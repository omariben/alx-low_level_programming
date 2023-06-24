#include "main.h"

int _putchar(char c);

/**
 * more_numbers - Prints numbers from 0 to 14 ten times
 *
 * Description: Prints numbers 0 to 14 ten times, with two digits for numbers
 *              greater than 9.
 * Return: void
 */
void more_numbers(void)
{
int x, y;

for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}

