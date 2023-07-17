#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - new type
 * @d: dog to be initialized
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * return: always 0
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
