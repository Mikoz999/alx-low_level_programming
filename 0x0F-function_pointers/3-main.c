#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}

