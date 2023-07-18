/*
 * File: 4-isalpha.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* _isalpha - Check for alphabetic character
* @c: The character to check
*
* Return: 1 if c is letter, lowercase or uppercase.
* Otherwise 0
*/

int _isalpha(int c)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
