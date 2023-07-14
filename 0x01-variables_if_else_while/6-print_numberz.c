/*
 * File: 6-print_numberz.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all single digit numbers,
 *        of base 10 starting from 0
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
for (n = 0; n < 10; n++)
putchar(n + '0');
putchar('\n');
return (0);
}
