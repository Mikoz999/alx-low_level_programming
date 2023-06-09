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
	(void)argv; /* Cast argv to void to avoid the unused parameter warning */

	_putchar((argc - 1) + '0');
	_putchar('\n');

	return (0);
}

