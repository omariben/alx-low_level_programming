#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Print numbers 0 to 9
 * Description: prints numbers 0 to 9 excluding 2 and 4
 * Return: numbers 0 to 9
*/
void printNumbers() {
    for (int i = 0; i <= 9; i++) {
        if (i != 2 && i != 4) {
            _putchar(i + '0');
            _putchar(' ');
        }
    }
    _putchar('\n');
}

int main() {
    printNumbers();
    return 0;

