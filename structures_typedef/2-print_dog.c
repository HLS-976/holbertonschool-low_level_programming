#include <stdlib.h>
#include "dog.h"
#include <math.h>
/**
 * print_dog - print a struct dog
 *
 * @d: struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (isnan(d->age))
			printf("Age: (nil)\n");
		else
			printf("Age: %.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
