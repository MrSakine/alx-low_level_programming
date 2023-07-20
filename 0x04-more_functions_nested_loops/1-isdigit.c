/*
 * File: 1-isdigit.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _isdigit - Check for a digit (0 through 9)
 * @c: The number to check
 *
 * Return: 1 if c is digit.
 * Otherwise 0
 */

int _isdigit(int c)
{
char a;
a = c;
if (a >= '0' && a <= '9')
{
return (1);
}
else
{
return (0);
}
}
