#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to print
 */

void print_number(int n)
{
    int i, j, k, m, digit;
    char num_str[20];

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }

    for (i = 0; n > 0; i++)
    {
        digit = n % 10;
        num_str[i] = digit + '0';
        n /= 10;
    }

    for (j = 0, k = i - 1; j < k; j++, k--)
    {
        m = num_str[j];
        num_str[j] = num_str[k];
        num_str[k] = m;
    }

    for (j = 0; j < i; j++)
    {
        _putchar(num_str[j]);
    }
}

