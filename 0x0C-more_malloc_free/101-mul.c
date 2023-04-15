#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Check if a character is a digit.
 *
 * @param c The character to check.
 * @return 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

/**
 * Returns the length of a string.
 *
 * @param s The string whose length to check.
 * @return Integer length of string.
 */
int _strlen(char *s)
{
    int i = 0;

    while (*s++)
        i++;

    return (i);
}

/**
 * Multiply two big number strings.
 *
 * @param s1 The first big number string.
 * @param s2 The second big number string.
 * @return The product big number string.
 */
char *big_multiply(char *s1, char *s2)
{
    char *r;
    int l1, l2, a, b, c, x;

    l1 = _strlen(s1);
    l2 = _strlen(s2);
    r = malloc(a = x = l1 + l2);
    if (!r)
        printf("Error\n"), exit(98);
    while (a--)
        r[a] = 0;

    for (l1--; l1 >= 0; l1--)
    {
        if (!_isdigit(s1[l1]))
        {
            free(r);
            printf("Error\n"), exit(98);
        }
        a = s1[l1] - '0';
        c = 0;

        for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
        {
            if (!_isdigit(s2[l2]))
            {
                free(r);
                printf("Error\n"), exit(98);
            }
            b = s2[l2] - '0';

            c += r[l1 + l2 + 1] + (a * b);
            r[l1 + l2 + 1] = c % 10;

            c /= 10;
        }
        if (c)
            r[l1 + l2 + 1] += c;
    }
    return (r);
}

/**
 * Multiply two big number strings.
 *
 * @param argc The number of arguments.
 * @param argv The argument vector.
 * @return Always 0 on success.
 */
int main(int argc, char **argv)
{
    char *r;
    int a, c, x;

    if (argc != 3)
        printf("Error\n"), exit(98);

    x = _strlen(argv[1]) + _strlen(argv[2]);
    r = big_multiply(argv[1], argv[2]);
    c = 0;
    a = 0;
    while (c < x)
    {
        if (r[c])
            a = 1;
        if (a)
          putchar(r[c] + '0');
        c++;
    }
    if (!a)
        putchar('0');
    putchar('\n');
    return (0);
}

