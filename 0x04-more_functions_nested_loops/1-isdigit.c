#include "main.h"
#include <stdio.h>
/**
 * _isdigit - return if a digit
 * @x: the digit to be checked
 * Return: 1 for digit else return 0
*/
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
