#include "dog.h"
/**
 * init_dog - initializes a dog
 * @d: pointer variable
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Nothing
 * Description: Initializes a dog struxt with the argument
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	ptr = d;
	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
}
