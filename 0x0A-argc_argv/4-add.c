/*
 * File: 4-add.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int count;
	int num;
	int sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (count = 0; argv[num][count]; count++)
		{
			if (argv[num][count] < '0' || argv[num][count] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
