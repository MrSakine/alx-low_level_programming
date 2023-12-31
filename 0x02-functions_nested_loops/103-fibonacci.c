/*
 * File: 103-fibonacci.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
* main - Prints the sum of the even-valued terms
* followed by a new line
*
* Return: Always 0
*/

int main(void)
{
unsigned long fib1 = 0, fib2 = 1, fibsum;
float even_sum;
while (1)
{
fibsum = fib1 + fib2;
if (fibsum > 4000000)
break;
if ((fibsum % 2) == 0)
even_sum += fibsum;
fib1 = fib2;
fib2 = fibsum;
}
printf("%.0f\n", even_sum);
return (0);
}
