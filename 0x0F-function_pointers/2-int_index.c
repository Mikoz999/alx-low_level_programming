#include <stdio.h>

/**
 * int_index - searches for an integer in an array of integers.
 *
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp function does not return 0
 *         -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    /* iterate over the array */
    for (i = 0; i < size; i++)
    {
        /* call cmp function with each element of the array */
        if (cmp(array[i]))
        {
            /* return index of element if cmp returns nonzero value */
            return i;
        }
    }

    /* return -1 if no element matches or if size <= 0 */
    return -1;
}

