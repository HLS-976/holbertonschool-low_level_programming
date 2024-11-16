#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 *
 *
 * @d: struct dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (name == NULL)
			name = "";

		if (owner == NULL)
			owner = "";

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
