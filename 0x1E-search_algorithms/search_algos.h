#ifndef SEARCH_ALOGS_H
#define SEARCH_ALOGS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array_util(int *array, int start, int end);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binary_search_e(int *array, size_t low, size_t high, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALOGS_H */
