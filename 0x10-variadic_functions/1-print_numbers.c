#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the integers to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list args;
        unsigned int i;

        /* Initialize the va_list */
        va_start(args, n);

        /* Print each number */
        for (i = 0; i < n; i++) {
                printf("%d", va_arg(args, int));

                /* Print the separator, if it's not NULL and not the last number */
                if (separator != NULL && i != n - 1)
                        printf("%s", separator);
        }

        /* Clean up the va_list */
        va_end(args);

        printf("\n");
}

