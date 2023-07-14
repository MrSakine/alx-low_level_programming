/*
 * File: 8-print_base16.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all the numbers of base 16
 *        in lowercase
 *
 *
 * Return: Always 0.
 */
int main(void)
{
char f;
int n;
for (n = 0; n < 10; n++)
putchar(n + '0');
for (f = 'a'; f <= 'f'; f++)
putchar(f);
putchar('\n');
return (0);
}
