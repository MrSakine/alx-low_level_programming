/*
 * File: 7-print_tebahpla.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the lowercase alphabet in
 *        reverse
 *
 *
 * Return: Always 0.
 */
int main(void)
{
char f;
for (f = 'z'; f >= 'a'; f--)
{
putchar(f);
}
putchar('\n');
return (0);
}
