#include "main.h"

/**
 * _strpbrk - searches for the first occurrence of a set of bytes
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
    int i;

    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
                return (s);
        }

        s++;
    }

    return ('\0');
}

