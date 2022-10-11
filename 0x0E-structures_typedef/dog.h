#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: first member
 * @age: second member
 * @owner: thrid member
 *
 * description: a structure that defines a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
#endif
