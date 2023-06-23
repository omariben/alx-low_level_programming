#include "main.h"
#include <stdio.h>
/**
 * _isupper - return if a letter is upper
 * @x: the number to be checked
 * Return: 1 for upper else return 0
*/
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
