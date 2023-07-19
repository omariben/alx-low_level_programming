#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_char_by_char - prints the name character by character.
 * @name: variable to be printed
 * Return: Always 0
 */
void print_char_by_char(char *name)
{
const char *ptr = name;
while (*ptr != '\0')
{
putchar(*ptr);
ptr++;
}
}
/**
 * print_name - prints the name using the provided function pointer
 * @name: variable to be printed
 * @f: pointer function
 * Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
