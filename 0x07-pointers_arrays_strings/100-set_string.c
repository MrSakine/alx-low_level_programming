/*
 * File: 100-set_string.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to pointer (from)
 * @to: pointer (to)
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
