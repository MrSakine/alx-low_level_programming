/*
 * File: 5-free_dog.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees dogs
 *
 * @d: dog type
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
