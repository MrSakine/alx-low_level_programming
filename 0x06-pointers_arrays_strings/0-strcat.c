/*
 * File: 0-strcat.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: copy destination
 * @src: copy source
 *
 * Return: pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
        int i = 0;
        int len = 0;

        while (dest[i++])
        {
                len++;
        }

        for (i = 0; src[i] != '\0'; i++)
        {
                dest[len + i] = src[i];
        }

        dest[len + i] = '\0';

        return (dest);
}
