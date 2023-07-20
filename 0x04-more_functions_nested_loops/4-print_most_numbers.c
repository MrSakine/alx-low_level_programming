/*
 * File: 4-print_most_numbers.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_most_numbers - Print the numbers
 * from 0 to 9, followed by a new line
 *
 * Return: void
 */

void print_most_numbers(void) {
    int n = 9;
    int i;
    for (i = 0; i <= n; i++)
    {
        char x = i + '0';
        if (x != '2' && x != '4')
        {
            _putchar(x);
        }
    }
    _putchar('\n');
    return;
}
