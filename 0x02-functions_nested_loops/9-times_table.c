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
    int N = 9;
    int i;
    int z;
    int y;
    
    for (i = 0; i < N; i++) {
        putchar('0');
        putchar(',');
        putchar(' ');
        
            int z = 0;
            int y = 0;
            
            while (z < N) {
                y += i;
                if ((y / 10) >= 1) {
                    putchar((y / 10) + '0');
                    putchar((y % 10) + '0');   
                }else{
                    putchar((y % 10) + '0');
                }
                
                if (z < N - 1) {
                    putchar(',');
                    putchar(' ');   
                }
                
                z += 1;
            }
        
        putchar('\n');
    }

    return;
}
