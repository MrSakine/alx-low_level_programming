/*
 * File: 10-add.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* add - Adds two integers and returns the result
* @a: first number
* @b: second number
*
* Return: the sum of @a and @b
*/

int add(int a, int b)
{
    unsigned int x = a < 0 ? -a : a;
    unsigned int y = b < 0 ? -b : b;
    return (x + y);
}
