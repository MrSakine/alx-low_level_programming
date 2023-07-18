/*
 * File: 9-times_table.c
 * Author: Fily M Sakine <msakine20@gmail.com>
 */

#include "main.h"

/**
* times_table - Print the 9 times table, starting with 0
*
* Return: void
*/

void times_table(void)
{
    int N = 10;
    int i;
    int z;
    int y;
    
    for (i = 0; i < N; i++) {
        _putchar('0');
        _putchar(',');
        _putchar(' ');
        _putchar(' ');
        
        z = 0;
        y = 0;
        
        while (z < N - 1) {
            y += i;
            
            if (z < N - 2) {
                if ((y / 10) >= 1) {
                    _putchar((y / 10) + '0');
                    _putchar((y % 10) + '0');   
                }else{
                    _putchar((y % 10) + '0');
                }
                _putchar(',');
                _putchar(' ');

                if ((y / 10) == 0) {
                    _putchar(' ');
                }
            }
            
            z += 1;
        }
    
        _putchar('\n');
    }

    return;
}
