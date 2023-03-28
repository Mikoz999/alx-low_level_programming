#include <stdio.h>
#include <string.h>
/**
 * rev_string - Write a function that reverses a strin
 * @s: reverse string
 */

void rev_string(char *s)
{
    int i, j, len = strlen(s);
    char tmp;

    j = 0;

    for (i = len - 1; i >= j; i--)
    {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        j++;
    }
}

