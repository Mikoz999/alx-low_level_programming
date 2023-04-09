#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: array of argument strings
 *
 * Return: 0 always (success)
 */

int main(int argc, char *argv[])
{
    /* silence unused parameter warning */
    (void)argv;

    /* print the number of arguments (minus the program name) */
    printf("%d\n", argc - 1);

    return (0);
}

