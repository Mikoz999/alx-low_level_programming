#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
    (void)argc;
    printf("%s\n", argv[0]);
    return (0);
}

