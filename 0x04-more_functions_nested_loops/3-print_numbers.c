#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0-9
 * return: Void
 */

void print_numbers(void)
{
    char c;
    for (c = '0'; c <= '9'; c++)
    {
        printf("%c", c);
    }
    printf("\n");
}

