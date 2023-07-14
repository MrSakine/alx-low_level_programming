/*
 * File: 1-last_digit.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of the number
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int lastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (n != 0 && n < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);   
}
else
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit); 
}
return (0);
}
