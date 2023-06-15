#include <stdio.h>

/**
 * main - Size is not grandeur, and territory does not make a nation
 *
 * Return: 0
 */
int main (void)
{
	char y;
	int w;
	long int z;
	long long int q;
	float a;

printf("size of a char: %zu byte(s)\n",(unsigned long)sizeof(y));
printf("size of a int: %zu byte(s)\n",(unsigned long)sizeof(w));
printf("size of a long int: %zu byte(s)\n",(unsigned long)sizeof(z));
printf("size of a long long int: %zu byte(s)\n",(unsigned long)sizeof(q));
printf("size of a float: %zu byte(s)\n",(unsigned long)sizeof(a));

return (0);
}
