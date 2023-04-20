#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 * @...: the arguments to print
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
        va_list args;
        unsigned int i = 0;
        char *str;
        char c;

        /* Initialize the va_list */
        va_start(args, format);

        /* Loop through the format string */
        while (format && format[i]) {
                switch (format[i]) {
                        case 'c':
                                /* Print a char */
                                c = va_arg(args, int);
                                printf("%c", c);
                                break;
                        case 'i':
                                /* Print an int */
                                printf("%d", va_arg(args, int));
                                break;
                        case 'f':
                                /* Print a float */
                                printf("%f", (float)va_arg(args, double));
                                break;
                        case 's':
                                /* Print a string */
                                str = va_arg(args, char *);
                                if (str == NULL)
                                        printf("(nil)");
                                else
                                        printf("%s", str);
                                break;
                }

                /* Print the separator, if it's not the last argument */
                if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
                                      format[i] == 'f' || format[i] == 's')) {
                        printf(", ");
                }

                /* Move on to the next format specifier */
                i++;
        }

        /* Clean up the va_list */
        va_end(args);

        printf("\n");
}

