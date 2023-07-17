#include <stdio.h>

#define ABS(x) (((x) < 0) ? -(x) : (x))
/**
 * main - computes the absolute value of a number
 * @x: value of absolute number
 *
 * Return: Always 0
 */
int main(void)
{
int num = -5;
int absNum = ABS(num);
printf("Absolute value of %d is %d\n", num, absNum);
return (0);
}
