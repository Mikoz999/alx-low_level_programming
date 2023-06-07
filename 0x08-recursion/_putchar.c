#include <unistd.h>

/**
 * _putchar.c - writes the charcter c tobstdout
 * @c the chararacter print
 *
 * Return: On succes 0 on error -1
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
