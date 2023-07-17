#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
 * init_dog - initialize a variable of type struct dog
 * main - entry point
 * @name: name of dog
 * struct dog - variable type
 * @age: age of the dog
 * @owner: owner of the dog
 * return: always 0
 */

struct dog
{
char* name;
float age;
char* owner;
};

void init_dog(struct dog* d, char* name, float age, char* owner);

#endif
