#include "main.h"
#include <stdlib.h>

/**
 * _strdup - creates a new string in memory and copies a given string to it
 * @str: string to be copied
 *
 * Return: pointer to the new string; NULL if str is NULL or if malloc fails
 */
char *_strdup(char *str)
{
        int i, len = 0;
        char *dup;

        if (str == NULL)
                return (NULL);

        for (i = 0; str[i]; i++)
                len++;

        dup = malloc(sizeof(char) * (len + 1));

        if (dup == NULL)
                return (NULL);

        for (i = 0; str[i]; i++)
                dup[i] = str[i];

        dup[len] = '\0';

        return (dup);
}

