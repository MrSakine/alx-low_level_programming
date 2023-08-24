/*
 * File: 100-first.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "lists.h"

void __attribute__((constructor)) printOnStartup(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */
void printOnStartup(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}

