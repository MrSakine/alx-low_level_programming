/*
 * File: 2-print_alphabet.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase
 *
 *
 * Return: Always 0.
 */
int main(void)
{
char f;
for (f = 'a'; f <= 'z'; f++)
putchar(f);
putchar('\n');
return (0);
}
