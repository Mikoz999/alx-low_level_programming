#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initialises the dog 
 * print_dog - Prints a struct dog. 
 * @d: The struct dog to be printed. 
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

