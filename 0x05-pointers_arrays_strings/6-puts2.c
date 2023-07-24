/*
 * File: 6-puts2.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: string
 *
 * Return: void.
 */

void puts2(char *str)
{
int i = 0;
int len = 0;

while (str[i++])
{
len++;
}

for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
