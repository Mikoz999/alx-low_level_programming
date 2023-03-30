#include <stdio.h>

/**
 * print_buffer - function that prints a buffer.
 * @buffer: pointer to the buffer
 * @size: size of the buffer
 */
void print_buffer(char *buffer, int size)
{
    int bufferIndex = 0, lineIndex;

    if (size <= 0) {
        putchar('\n');
    } else {
        while (bufferIndex < size) {
            // Print the index of the current line
            printf("%08x: ", bufferIndex);

            // Print the hexadecimal representation of the current line
            lineIndex = 0;
            while (lineIndex < 10) {
                if (lineIndex % 2 == 0 && lineIndex > 0) {
                    printf(" ");
                }
                if (lineIndex + bufferIndex > size - 1) {
                    printf("  ");
                } else {
                    printf("%.2x", buffer[lineIndex + bufferIndex]);
                }
                lineIndex++;
            }

            // Print the ASCII representation of the current line
            putchar(' ');
            lineIndex = 0;
            while (lineIndex < 10) {
                if (lineIndex + bufferIndex > size - 1) {
                    break;
                }
                if (buffer[lineIndex + bufferIndex] >= ' ' && buffer[lineIndex + bufferIndex] <= '~') {
                    putchar(buffer[lineIndex + bufferIndex]);
                } else {
                    putchar('.');
                }
                lineIndex++;
            }

            putchar('\n');
            bufferIndex += 10;
        }
    }
}

