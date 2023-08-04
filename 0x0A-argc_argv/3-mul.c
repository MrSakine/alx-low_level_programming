/*
 * File: 3-mul.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) * argv[])
{
	int a;
	int b;
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	a = atoi(argv[argc - 2]);
	b = atoi(argv[argc - 1]);
	m = (a * b);

	printf("%d\n", m);
	return (0);
}
