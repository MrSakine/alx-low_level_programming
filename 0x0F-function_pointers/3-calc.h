#ifndef CALC_H
#define CALC_H

/*
 * File: 3-calc.h
 * Author: Fily M Sakine <msakine20@gmail.com>
 * Description: contain all the function prototypes and data structures
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
