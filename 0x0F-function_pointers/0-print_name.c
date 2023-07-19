#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints name
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
void print_name(char *name, void (*f)(char *))
{
f(name);
}
