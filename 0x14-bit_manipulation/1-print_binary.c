#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int flag = 0;

	while (shift >= 0)
	{
		unsigned long int bit = n >> shift;

		if (bit & 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || shift == 0)
			_putchar('0');

		shift--;
	}
}

