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
  if (size > 0) {
    c = 35;
    for (i = 0; i < size; i++) {
      for (j = 0; j < size; j++) {
          _putchar(c);
      }
      _putchar('\n');
    }
  } else {
    _putchar('\n');
  }
  return;
}
