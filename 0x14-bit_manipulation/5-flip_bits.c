#include "main.h"

/**
 * flip_bits - Counts the number of bits you would need to flip to get from
 * one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
	if ((diff & 1) == 1)
	count++;
	diff >>= 1;
	}

	return (count);
}

