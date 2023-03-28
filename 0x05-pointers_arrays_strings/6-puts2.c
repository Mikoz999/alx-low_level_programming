#include <stdio.h>
/**
 * puts2 - prints every other character of a string 
 * starting with the first character
 * @str: the string to prin
 */

void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (i % 2 == 0) {
            putchar(str[i]);
        }
        i++;
    }
    putchar('\n');
}

int start()
{
    char str[] = "0123456789";

    puts2(str);
    return (0);
}

