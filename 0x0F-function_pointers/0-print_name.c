/*
 * File: 0-print_name.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name
 *
 * @name: name to print
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
