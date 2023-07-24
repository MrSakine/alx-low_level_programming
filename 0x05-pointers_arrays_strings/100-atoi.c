/*
 * File: 100-atoi.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string to convert
 *
 * Return: number.
 */

int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
int j;

for (j = 0; s[j] != '\0'; j++)
{
if (s[j] == '-')
sign *= -1;

else if (s[j] >= '0' && s[j] <= '9')
num = (num * 10) + (s[j] - '0');

else if (num > 0)
break;

}

return (num * sign);
}
