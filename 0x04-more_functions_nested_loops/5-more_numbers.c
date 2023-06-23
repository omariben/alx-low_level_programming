#include "main.h"
#include <stdio.h>
/**
 * more_number - Print 10 times numbers from 0 up to 14
 * Description: Prints the numbers 0 upto 14 ten times
 * Return: 10 times numbers from 0 to 14
*/
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
	for (y = 0; y <= 14; y++)
	if (y > 0)
	{_putchar((y / 10) + '0');
	}
	{_putchar((y % 10) + '0');
	}
	_putchar('\n');
	}
}
