/*
 * File: 5-rev_string.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to reverse
 *
 * Return: void.
 */

void rev_string(char *s)
{
int j;
int i = 0;
char t;

for (j = 0; s[j] != '\0'; j++)
{
i += 1;
}

for (j = i - 1; j >= i / 2; j--)
{
t = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = t;
}
}
