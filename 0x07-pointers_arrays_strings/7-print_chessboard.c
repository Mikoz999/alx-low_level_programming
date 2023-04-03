#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @chessboard: 2D array representing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*chessboard)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            _putchar(chessboard[i][j]);

        _putchar('\n');
    }
}

