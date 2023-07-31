/*
 * File: 5-strstr.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string source
 * @needle: substring source
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	while (haystack[i++])
		len1++;

	while (needle[j++])
		len2++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i])
			{
				return (haystack + (len1 - len2));
			}
		}
	}

	return ('\0');
}
