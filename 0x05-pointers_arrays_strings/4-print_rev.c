/*
 * File: 4-print_rev.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a new line
 *
 * @s: string to reverse
 *
 * Return: void.
 */

void print_rev(char *s) {
	int j;
	int i = 0;

	for (j = 0; s[j] != '\0'; j++) {
		i += 1;
	}

	for (j = i - 1; s[j] != '\0'; j--) {
		_putchar(s[j]);
	}

	_putchar('\n');

    return;
}
