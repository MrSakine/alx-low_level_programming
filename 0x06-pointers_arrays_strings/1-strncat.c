/*
 * File: 1-strncat.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: copy destination
 * @src: copy source
 * @n: bytes from @src
 *
 * Return: pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len = 0;

while (dest[i++])
{
len++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}

dest[len + i] = '\0';

return (dest);
}
