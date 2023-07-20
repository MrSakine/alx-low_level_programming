/*
 * File: 0-isupper.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
 * _isupper - Check for lowercase character
 * @c: The character to check
 *
 * Return: 1 if c is lowercase.
 * Otherwise 0
 */

int _isupper(int c) {
  char a;
  if (c >= '0' && c <= '9') {
    a = c + '0';
  } else {
    a = c;
  }
  if (a >= 'a' && a <= 'z') {
    return (0);
  } else if (a >= 'A' && a <= 'Z') {
    return (1);
  } else {
    return (1);
  }
}
