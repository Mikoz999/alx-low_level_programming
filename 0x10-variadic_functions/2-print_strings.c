#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of strings passed to the function
 * @...: the strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list args;
        unsigned int i;
        char *str;

        /* Initialize the va_list */
        va_start(args, n);

        /* Print each string */
        for (i = 0; i < n; i++) {
                str = va_arg(args, char *);

                /* Print (nil) if the string is NULL */
                if (str == NULL)
                        printf("(nil)");
                else
                        printf("%s", str);

                /* Print the separator, if it's not NULL and not the last string */
                if (separator != NULL && i != n - 1)
                        printf("%s", separator);
        }

        /* Clean up the va_list */
        va_end(args);

        printf("\n");
}

