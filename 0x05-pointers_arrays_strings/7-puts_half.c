#include <stdio.h>
#include <string.h>
/**
 * puts_half - Prints half of a string
 * @str: string to print
 **/

void puts_half(char *str)
{
    int i, len = strlen(str);
    int middle = len / 2;

    if (len % 2 != 0) {
        middle++;
    }

    for (i = middle; str[i] != '\0'; i++) {
        putchar(str[i]);
    }

    putchar('\n');
}

