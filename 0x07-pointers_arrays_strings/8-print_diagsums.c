#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @matrix: the matrix to be processed
 * @size: the size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *matrix, int size)
{
    int i, j, sum_diag1, sum_diag2;

    sum_diag1 = 0;
    sum_diag2 = 0;

    /* sum the elements on the first diagonal */
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
            {
                sum_diag1 = sum_diag1 + *(matrix + (i * size) + j);
            }
        }
    }

    /* sum the elements on the second diagonal */
    for (i = 0; i < size; i++)
    {
        for (j = (size - 1); j >= 0; j--)
        {
            if (j == (size - 1 - i))
            {
                sum_diag2 = sum_diag2 + *(matrix + (i * size) + j);
            }
        }
    }

    printf("%d, %d\n", sum_diag1, sum_diag2);
}

