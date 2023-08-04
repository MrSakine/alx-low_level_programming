/*
 * File: 2-args.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("The command had no other arguments.\n");
	}

	return (0);
}
