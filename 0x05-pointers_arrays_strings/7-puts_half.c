/*
 * File: 7-puts_half.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 *
 * @str: string
 *
 * Return: void.
 */

void puts_half(char *str)
{
        int i = 0;
        int len = 0;
        int n = 0;

        while (str[i++]) {
                len++;
        }

        if (len % 2 == 1) {
                n = (len - 1) / 2;
        }
        else
        {
                n = len / 2;
        }

        for (i = n; i < len; i += 1)
        {
                _putchar(str[i]);
        }

        _putchar('\n');
}
