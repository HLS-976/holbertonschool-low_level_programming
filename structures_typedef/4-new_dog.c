#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: char *
 * @age: float
 * @owner: char *
 * Return: dog_t *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		if (name != NULL)
			new_dog->name = name;
		else
			new_dog->name = "(nil)";

		if (age > 0)
			new_dog->age = age;
		else
			new_dog->age = 0;

		if (owner != NULL)
			new_dog->owner = owner;
		else
			new_dog->owner = "(nil)";
	}

	return (new_dog);
}
