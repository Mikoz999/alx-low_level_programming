#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a line of a buffer in hexadecimal and ASCII format
 * @buffer: buffer to print from
 * @size: size of the buffer
 * @line_num: line number to print
 */
void print_line(char *buffer, int size, int line_num)
{
    int i, j;

    for (i = line_num * 10; i < line_num * 10 + 10; i++)
    {
        if (i < size)
        {
            putchar((buffer[i] >> 4) & 0xf ? (buffer[i] >> 4) + '0' + 7 + ('A' - '9' - 1) : (buffer[i] >> 4) + '0');
            putchar((buffer[i] & 0xf) ? (buffer[i] & 0xf) + '0' + 7 + ('A' - '9' - 1) : (buffer[i] & 0xf) + '0');
        }
        else
        {
            printf("  ");
        }

        if (i % 2 != 0)
        {
            putchar(' ');
        }
    }

    putchar(' ');

    for (j = line_num * 10; j < line_num * 10 + 10 && j < size; j++)
    {
        if (buffer[j] >= 32 && buffer[j] <= 126)
        {
            putchar(buffer[j]);
        }
        else
        {
            putchar('.');
        }
    }

    putchar('\n');
}

/**
 * print_buffer - prints a buffer in hexadecimal and ASCII format
 * @buffer: buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *buffer, int size)
{
    int i, num_lines;

    for (i = 0, num_lines = size / 10 + (size % 10 != 0); i < num_lines; i++)
    {
        printf("%08x: ", i * 10);
        print_line(buffer, size, i);
    }
}
