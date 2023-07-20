/*
 * File: 8-print_square.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * print_square - prints a square,
 * followed by a new line
 *
 * @size: size is the size of the square
 *
 * Return: void
 */

void print_diagonal(int size) {
  int i;
  int j;
  char c;
  if (n > 0) {
    c = 35;
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
          _putchar(c);
      }
      _putchar('\n');
    }
  } else {
    _putchar('\n');
  }
  return;
}
