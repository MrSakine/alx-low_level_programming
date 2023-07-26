/*
 * File: 5-string_toupper.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 *
 * @a: string to change
 *
 * Return: char*.
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}

	return (a);
}
