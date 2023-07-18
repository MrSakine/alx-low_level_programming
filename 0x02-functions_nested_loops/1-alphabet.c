/*
 * File: 1-alphabet.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* print_alphabet - Prints the alphabet
*                  in lowercase
* Arguments - void
* Return: void
*/

void print_alphabet() {
    char i;
    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}
