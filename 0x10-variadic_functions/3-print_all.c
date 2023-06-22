#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format specifier.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_char;

	va_start(args, format);

	while (format && format[i])
	{
		current_char = format[i];

		switch (current_char)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1])
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}

