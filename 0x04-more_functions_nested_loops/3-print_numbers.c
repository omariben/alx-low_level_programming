#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers 0 to 9
 * Return: numbers 0 to 9
*/
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	putchar(x + '0');
	}
	putchar('\n');
}

