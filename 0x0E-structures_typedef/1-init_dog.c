#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Int Dog
 * @d: Pointer
 * @name: Dog Name
 * @age: Dog Age
 * @owner: Dog Owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
