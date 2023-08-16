/*
 * File: 3-get_op_func.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "3-calc.h"

/**
 * get_op_func - get function pointer
 *
 * @s: operator as character
 *
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
