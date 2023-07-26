/*
 * File: 7-leet.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @a: string to change
 *
 * Return: char*.
 */

char *leet(char *a)
{
char low[] = {'a', 'e', 'o', 't', 'l'};
char upper[] = {'A', 'E', 'O', 'T', 'L'};
char number[] = {4, 3, 0, 7, 1};
int i;
int j;

for (i = 0; a[i] != '\0'; i++)
{
for (j = 0; j < 5; j++) {
if (a[i] == low[j] || a[i] == upper[j])
{
a[i] = number[j] + '0';
}
}
}

return (a);
}
