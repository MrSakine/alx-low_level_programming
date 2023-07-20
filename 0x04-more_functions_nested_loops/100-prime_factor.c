/*
 * File: 100-prime_factor.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
 * main - prints the largest prime factor of
 * the number 612852475143, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
long int n = 612852475143;
int i = 2;

while (n > 1)
{
if (n % i == 0)
{
n = n / i;
}
else
{
i += 1;
}
}

printf("%d\n", i);
return (0);
}
