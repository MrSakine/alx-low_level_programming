/*
 * File: 9-fizz_buzz.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <unistd.h>


/**
 * main - prints the numbers from 1 to 100,
 * followed by a new line
 *
 * Return: Always 0.
 */

int main(void)
{
int N = 100;
int i;

for (i = 1; i <= N; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else if (i % 15 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
putchar(' ');
}

putchar('\n');
return (0);
}
