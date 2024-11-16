#ifndef DOG_H
#define DOG_H
#include <stdio.h>
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
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
