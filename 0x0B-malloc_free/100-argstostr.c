#include "main.h" 
#include <stdlib.h>

/**
 * argstostr - Concatenates an array of strings with a newline separator
 * @ac: Number of strings in the array
 * @av: Array of strings to concatenate
 *
 * Return: A pointer to a newly allocated string containing the concatenated
 * strings separated by newlines, or NULL if ac is 0 or av is NULL, or if
 * memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
        char *str;
        int i, j, k, len = ac;

        if (ac == 0 || av == NULL)
                return (NULL);

        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j]; j++)
                        len++;
        }

        str = malloc(sizeof(char) * len + 1);

        if (str == NULL)
                return (NULL);

        k = 0;

        for (i = 0; i < ac; i++)
        {
                for (j = 0; av[i][j]; j++)
                        str[k++] = av[i][j];

                str[k++] = '\n';
        }

        str[len] = '\0';

        return (str);
}

