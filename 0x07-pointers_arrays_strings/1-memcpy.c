#include "main.h"

/**
 * _memcpy - function that copies n bytes from memory area
 * @dest: copy to
 * @src: copy from
 * @n: amount to copy from memory area
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}
