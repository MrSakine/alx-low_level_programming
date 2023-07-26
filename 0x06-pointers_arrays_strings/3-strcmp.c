/*
 * File: 3-strcmp.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: int.
 */

int _strcmp(char *s1, char *s2)
{
    int i;
    int a = 0;
    int b = 0;

    for (i = 0; s1[i] != '\0'; i++)
    {
        a += (s1[i] - '0');
    }

    for (i = 0; s2[i] != '\0'; i++)
    {
        b += (s2[i] - '0');
    }

    return (a - b);
}
