#include <stdio.h>
/**
 * swap_int - swap values of two integers.
 * @a: first interger
 * @b: second interger
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
