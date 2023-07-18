/*
 * File: 7-print_last_digit.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* print_last_digit - Print the last digit of a number
* @n: The number to check
*
* Return: last digit of @n
*/

int print_last_digit(int n)
{
    int l = n % 10;
    printf("%d", l);
    return (l);
}

