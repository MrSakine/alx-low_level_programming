/*
 * File: 5-sqrt_recursion.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _calculate_root - returns the natural
 * square root of a number
 *
 * @num: number
 * @root: natural root
 *
 * Return: int
 */
int _calculate_root(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if (root == num / 2)
	{
		return (-1);
	}
	else
	{
		return (_calculate_root(num, root + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 *
 * @n: number
 *
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (_calculate_root(n, 0));
}
