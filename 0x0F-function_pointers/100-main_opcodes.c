#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function
 * @num_bytes: Number of bytes to print
 *
 * Description: This function prints the opcodes of its own main function
 *              by reading the memory at the corresponding address.
 *              It prints the opcodes in lowercase hexadecimal format,
 *              with each opcode represented by two characters.
 *              The listing ends with a newline character.
 *              If the number of bytes is negative, it prints an error message
 *              and exits with status 2. If the number of arguments
 *              is incorrect,
 *              it prints an error message and exits with status 1.
 */
void print_opcodes(int num_bytes)
{
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}

	printf("\n");
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Description: This function is the entry point of the program.
 *              It checks if the correct number of arguments is provided.
 *              If not, it prints an error message and exits with status 1.
 *              It converts the argument to an integer using atoi.
 *              Then, it calls the print_opcodes function with the provided
 *              number of bytes to print the opcodes of its own main function.
 *
 * Return: 0 on success, 1 on incorrect argument count
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	print_opcodes(num_bytes);

	return (0);
}

