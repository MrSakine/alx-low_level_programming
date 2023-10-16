/*
 * File: strspn.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string source
 * @accept: substring source
 *
 * Return: length of @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				len++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (len);
			}
		}
	}

	return (len);
}