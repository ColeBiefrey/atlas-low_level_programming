#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: struct dog
 * @name: name of dog
 * @age: age of do.
 * @owner: owner of dog
 * Return: no return
 */

	void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
