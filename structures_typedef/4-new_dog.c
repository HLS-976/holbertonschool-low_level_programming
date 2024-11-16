#include "dog.h"
#include <math.h>
#include <stdlib.h>

/**
 * _strlen - eturns the length of a string
 *
 * @s: the string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * *_strcpy - function that copies the string
 *
 * @dest: pointer
 *
 * @src: pointer
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (ptr);
}

/**
 * new_dog - create a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int taille;

	if (name == NULL || isnan(age) || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}

	taille = _strlen(name);
	d->name = malloc(taille + 1 * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	_strcpy(d->name, name);
	d->name[taille] = '\0';

	taille = _strlen(owner);
	d->owner = malloc(taille + 1 * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	_strcpy(d->owner, owner);
	d->owner[taille] = '\0';

	d->age = age;

	return (d);
}
