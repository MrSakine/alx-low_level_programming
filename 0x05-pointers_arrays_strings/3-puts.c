/*
 * File: 3-puts.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <unistd.h>
#include "main.h"

/**
 * _puts - prints a string,
 * followed by a new line, to stdout
 *
 * @str: string to write
 *
 * Return: void.
 */

void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		write(1, &(str[j]), 1);
	}

	write(1, &('\n'), 1);
}
