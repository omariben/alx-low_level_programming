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

printf("size of a char:%lu byte(s)\n", (unsigned long)sizeof(y));
printf("size of a int:%lu byte(s)\n", (unsigned long)sizeof(w));
printf("size of a long int:%lu byte(s)\n", (unsigned long)sizeof(z));
printf("size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(q));
printf("size of a float:%lu byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
