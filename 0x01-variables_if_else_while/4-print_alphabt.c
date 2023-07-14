/*
 * File: 4-print_alphabt.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase,
 *        except 'e' and 'q'
 *
 *
 * Return: Always 0.
 */
int main(void)
{
char f;
for (f = 'a'; f <= 'z'; f++)
{
if (f != 'e' && f != 'q')
putchar(f);
}
putchar('\n');
return (0);
}
