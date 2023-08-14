#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

/**
 * struct dog - dog type structure.
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: A dog type structure with
 * the following attributes:
 * name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *str);

#endif
