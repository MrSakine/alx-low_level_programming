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
        int i;

        for (i = 0; str[i] != '\0'; i += 2)
        {
                int j = str[i];

                _putchar(j);
        }

        _putchar('\n');
}
