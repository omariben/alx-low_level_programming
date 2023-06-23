#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - 0 to 9 without 2 and 4
 * @x: the numbers tp be printed
 * Return: 0 to 9 witout numbers 2 and 4
*/
void print_most_numbers(void)
{
	int x = 0;

	for (x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	_putchar ("\n");
	}
}
