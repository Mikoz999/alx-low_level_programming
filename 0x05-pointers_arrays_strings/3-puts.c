#include <stdio.h>
/**
 * _puts - print a string followed by a new line
 * @str - string to print
 * Return: On succes return nummber of characters
 */

void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	putchar('n');
}
