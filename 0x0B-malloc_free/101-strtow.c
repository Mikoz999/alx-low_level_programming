#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int i, length;

    length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **words;
    int word_count, word_length, i, j, k;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    i = 0;
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            str++;
            continue;
        }

        word_length = 0;
        while (str[word_length] != ' ' && str[word_length] != '\0')
            word_length++;

        words[i] = malloc((word_length + 1) * sizeof(char));
        if (words[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(words[j]);
            free(words);
            return NULL;
        }

        for (k = 0; k < word_length; k++)
            words[i][k] = *str++;

        words[i][k] = '\0';
        i++;
    }

    words[i] = NULL;
    return words;
}

