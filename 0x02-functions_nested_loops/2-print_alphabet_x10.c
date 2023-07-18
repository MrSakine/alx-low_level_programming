/*
 * File: 2-print_alphabet_x10.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* print_alphabet - Prints 10 times the alphabet
*                  in lowercase
* Arguments - void
* Return: void
*/

void print_alphabet_x10(void)
{
    int i;
    char j;
    for (i = 0; i < 10; i++)
    {
        for (j = 'a'; j <= 'z'; j++)
        {
            _putchar(j);
        }
        _putchar('\n');
    }
}
