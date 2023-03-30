#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */

char *rot13(char *s)
{
    int i, j;
    char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    for (i = 0; s[i]; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            for (j = 0; j < sizeof(a); j++)
            {
                if (a[j] == s[i])
                {
                    s[i] = b[j];
                    break;
                }
            }
        }
    }
    return (s);
}

