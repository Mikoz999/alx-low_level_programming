#include <stdio.h>
/**
 * _strcpy - Copies a string from source
 * @dest: Destination string to copy 
 * @src: Source string to copy from
 * Return: Pointer to the destination string
 **/

char *_strcpy(char *dest, char *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    return dest;
}

