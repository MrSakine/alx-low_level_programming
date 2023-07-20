/*
 * File: 6-print_line.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_line - Draws a straight line
 * in the terminal
 * @n: number of times the character '_'
 * should be printed
 *
 * Return: void
 */

void print_line(int n) {
    int i;
    if (n > 0) {
        for (i = 0; i < n; i++) {
            putchar('_');
        }
    }
    
    putchar('\n');
    return;
}
