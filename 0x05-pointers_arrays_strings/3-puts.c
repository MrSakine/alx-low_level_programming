/*
 * File: 3-puts.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

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
        _putchar(str[j]);
    }

    _putchar('\n');
}
