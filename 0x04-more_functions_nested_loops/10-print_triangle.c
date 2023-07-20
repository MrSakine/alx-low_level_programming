/*
 * File: 10-print_triangle.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"


/**
 * print_triangle - prints a triangle,
 * followed by a new line
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
  int i;
  int j;
  int k;
  char c;
  if (size > 0)
  {
    c = 35;
    for (i = 0; i < size; i++)
    {
      for (j = 0; j < (size - i) - 1; j++)
      {
        _putchar(' ');
      }

      for (k = 0; k <= i; k++)
      {
        _putchar(c);
      }

      _putchar('\n');
    }
  }
  else
  {
    _putchar('\n');
  }
}
