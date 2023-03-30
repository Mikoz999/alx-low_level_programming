#include "main.h"
/**
 * infinite_add - adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: store result
 * @size_r: size of stored result
 *
 * Return: pointer to r, or NULL if result would overflow
 */

char *infinite_add(const char *n1, const char *n2, char *r, int size_r)
{
    int i, j, k, l, m, n, carry = 0;
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int maxlen = (len1 > len2) ? len1 : len2;

    if (maxlen + 1 > size_r)
        return NULL;

    r[maxlen] = '\0';

    for (i = len1 - 1, j = len2 - 1, k = maxlen - 1; k >= 0; i--, j--, k--)
    {
        n = carry;
        if (i >= 0)
            n += n1[i] - '0';
        if (j >= 0)
            n += n2[j] - '0';

        if (n >= 10)
        {
            carry = 1;
            n -= 10;
        }
        else
        {
            carry = 0;
        }

        r[k] = n + '0';
    }

    if (carry)
    {
        if (maxlen + 2 > size_r)
            return NULL;

        for (l = maxlen; l > 0; l--)
        {
            r[l] = r[l - 1];
        }
        r[0] = '1';
    }

    return r;
}

