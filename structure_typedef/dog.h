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


struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * my_dog - typedef for struct dog
 */
typedef struct dog my_dog;
#endif
