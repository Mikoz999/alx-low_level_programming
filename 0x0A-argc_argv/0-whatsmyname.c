#include "main.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argc;

	for (i = 0; argv[0][i] != '\0'; i++)
		_putchar(argv[0][i]);

	_putchar('\n');

	return (0);
}

