/*
 * File: 1-init_dog.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - init a dog type structure.
 *
 * @d: dog type
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
