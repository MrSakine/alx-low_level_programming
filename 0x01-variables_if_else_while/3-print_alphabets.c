/*
 * File: 3-print_alphabets.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase,
                 and then in uppercase
 *
 *
 * Return: Always 0.
 */
int main(void)
{
char f;
char F;
for (f = 'a'; f <= 'z'; f++)
putchar(f);
for (F = 'A'; F <= 'Z'; F++)
putchar(F);
putchar('\n');
return (0);
}
