#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if the strings are equal,
 *         a negative value if the first string is less than the second,
 *         or a positive value if the first string is greater than the second.
 */

int _strcmp(char *s1, char *s2)
{
    while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    if (*s1 != *s2)
        return (*s1 - *s2);

    return (0);
}

