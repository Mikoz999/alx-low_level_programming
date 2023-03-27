#include <stdio.h>
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: The string to print
 *
 * Return: Void
 */

void print_rev(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        i++;
    }

    for (i -= 1; i >= 0; i--)
    {
        putchar(s[i]);
    }

    putchar('\n');
}
