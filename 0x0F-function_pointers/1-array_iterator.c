#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
#include <unistd.h>
/**
 * array_iterator - executes the provided function
 * on each element of the array
 * @size: size of the array
 * @action: pointer to the function
 * @array: part of the array iterator
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}

/**
 * print_element - demonstrate how array_iterator works
 * @num: value of the print element
 * Return: Always 0
 */
void print_element(int num)
{
char digit = num + '0';
write(1, &digit, 1);
}

