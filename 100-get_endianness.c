#include "main.h"

/**
*get_endianness - Finds the endianness of a system it is executed on.
*The function takes no argument.
*Return: The function returns an interger 1 if the system is
*little endian and 0 if the system is big endian.
*/

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)(&x);

	if (*c == 1)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

