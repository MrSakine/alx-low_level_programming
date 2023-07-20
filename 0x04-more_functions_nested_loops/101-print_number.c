/*
 * File: 101-print_number.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_number - prints an integer
 *
 * Return: Always 0.
 */

void print_number(int n)
{
  unsigned int m = n < 0 ? -n : n;

  if (n < 0)
  {
    _putchar('-');
  }

  if (m >= 1000)
  {
    _putchar((m / 1000) + '0');
    _putchar(((m / 100) % 10) + '0');
    _putchar(((m / 10)) % 10 + '0');
  }
  else if (m >= 100)
  {
    _putchar((m / 100) + '0');
    _putchar(((m / 10)) % 10 + '0');
  }
  if (m <= 99 && m >= 10)
  {
    _putchar((m / 10) + '0');
  }

  _putchar((m % 10) + '0');

  return;
}
