#include <stdio.h>
#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: Number to be printed
 * Return: returns 10 to power exponent
 */
void print_number(int n)
{
    unsigned int num;
    
    if (n < 0) {
        _putchar('-');
        n *= -1;
    }

    num = n;                                                    
    if (num / 10)
        print_number(num / 10);

    _putchar(num % 10 + '0');
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-402);
    _putchar('\n');
    print_number(2147483647);
    _putchar('\n');
    return (0);
}
