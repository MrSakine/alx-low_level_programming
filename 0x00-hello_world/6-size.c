/*
 * File: 6-size.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints size of various types on the computer
 *
 * Return: Always 0.
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long));
printf("Size of a long long int: %lli byte(s)\n", sizeof(long));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
