#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character.
 * @args: The va_list of arguments.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints an integer.
 * @args: The va_list of arguments.
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The va_list of arguments.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The va_list of arguments.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str != NULL)
		printf("%s", str);
	else
		printf("(nil)");
}

/**
 * print_all - Prints anything based on the format specifier.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		switch (current_format)
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_integer(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				i++;
				continue;
		}

		i++;

		if (format[i] && (current_format == 'c' || current_format == 'i' ||
				  current_format == 'f' || current_format == 's'))
			printf(", ");
	}

	printf("\n");

	va_end(args);
}

