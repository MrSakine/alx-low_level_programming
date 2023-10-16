/*
 * File: strlen.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to get the length
 *
 * Return: (string length).
 */
int _strlen(char *s)
{
	int i, j;

	i = 0;

	for (j = 0; s[j] != '\0'; j++)
		i += 1;

	return (i);
}