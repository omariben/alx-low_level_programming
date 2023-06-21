#include <stdio.h>

/**
 * main - outputs printAlphabet lowercase
 * Return: 0
*/
int printAlphabet(void)
/*prints lower case alphabet*/
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
printf("%c", letter);
}
printf("\n");
}
int main(void)
{
printAlphabet();
return (0);
}
