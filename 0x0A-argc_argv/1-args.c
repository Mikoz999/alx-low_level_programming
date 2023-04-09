#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return (0);
}
