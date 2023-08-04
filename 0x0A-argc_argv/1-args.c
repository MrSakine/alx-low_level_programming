/*
 * File: 1-args.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) * argv[])
{
	printf("%d\n", argc);

	return (0);
}
