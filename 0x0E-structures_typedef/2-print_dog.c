#ifndef DOG_H
#define DOG_H
#include <stdio.h>

{
char *name;
int age;
char *owner;
};
/**
 * print_dog - Entry point
 * @d: variables value
 * Return: NULL
 */

void print_dog(struct dog *d)
{
int d;

if (d == NULL)
{
return (nil);
}

printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
printf("Age: %d\n", d->age);
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
#endif
