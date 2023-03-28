#include <stdio.h>
/**
 * print_array - prints the n elements of an array of integers
 * @a: array to be  printed
 * @n: number of elements in the array
 **/

void print_array(int *a, int n)
{
    int i;

    if (n <= 0)
    {
        puts("Array is empty.");
        return;
    }

    for (i = 0; i < n; i++)
    {
        if (i == (n - 1))
        {
            printf("%d", a[i]);
        }
        else
        {
            printf("%d, ", a[i]);
        }
    }

    printf("\n");
}

