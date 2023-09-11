#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a new type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
