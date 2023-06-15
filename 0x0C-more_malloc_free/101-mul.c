#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - calculates the length of a string
 * @s: the input string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * multiply - multiplies two positive numbers represented as strings
 * @num1: the first number
 * @num2: the second number
 *
 * Return: a pointer to the result string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len3 = len1 + len2;
	int i, j, carry, n1, n2, sum;
	char *result = malloc(sizeof(char) * (len3 + 1));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < len3; i++)
		result[i] = '0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (result[i + j + 1] - '0') + (n1 * n2) + carry;
			result[i + j + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}

		if (carry > 0)
			result[i + j + 1] += carry;
	}

	result[len3] = '\0';

	return (result);
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, 1 otherwise
 */
int main(int argc,  char *argv[])
{
	char *num1, *num2, *result;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];


	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!_isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);

	return (0);
}

