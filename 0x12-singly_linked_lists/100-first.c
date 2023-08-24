/*
 * File: 100-first.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

void __attribute__((constructor)) printOnStartUp(void);

/**
 * printOnStartUp - Prints a string before the
 *        main function is executed.
 */
void printOnStartUp(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
