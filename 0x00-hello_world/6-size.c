/*
 * File: 6-size.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints size of various types on the computer it is compiled and run on
 *
 * Return: Always 0.
 */
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of a int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %ld byte(s)\n", sizeof(long));
printf("Size of a long long int: %lld byte(s)\n", sizeof(long));
printf("Size of a float: %f byte(s)\n", sizeof(float));
return (0);
}
