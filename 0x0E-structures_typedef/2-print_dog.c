/*
 * File: 2-print_dog.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 *
 * @d: dog type
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : NULL);
		printf("Age: %f\n", d->age ? d->age : 0);
		printf("Owner: %s\n", d->owner ? d->owner : NULL);
	}
}
