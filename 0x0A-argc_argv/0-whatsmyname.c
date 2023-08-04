/*
 * File: 0-whatsmyname.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
