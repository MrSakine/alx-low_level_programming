/*
 * File: dog.h
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

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
