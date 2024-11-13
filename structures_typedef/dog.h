#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct of dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * Description: this structure
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

