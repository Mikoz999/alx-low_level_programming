#include "main.h" 

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to string to search
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the substring or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
        char *s1 = haystack - 1;
        int len, count;

        for (len = 0; *(needle + len); len++)
                ;

        do {
                s1++;
                for (count = 0; count < len; count++)
                        if (*(s1 + count) != *(needle + count))
                                break;
                if (count == len)
                        return (s1);
        } while (*s1 != '\0');

        return (0);
}

