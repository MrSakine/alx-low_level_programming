/*
 * File: 6-cap_string.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @a: string to change
 *
 * Return: char*.
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{

		if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t' || a[i] == '.')
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] = a[i + 1] - 32;
			}

			if (a[i] == '\t')
			{
				a[i] = ' ';
			}
		}
	}

	return (a);
}
