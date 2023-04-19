#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array of integers
 * @array: pointer to the array of integers
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function does not return 0,
 * -1 if no element matches or size is less than or equal to 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    /* check if array and cmp function pointers are not NULL, and size is greater than 0 */
    if (array == NULL || cmp == NULL || size <= 0)
        return (-1);

    /* loop through the array */
    for (i = 0; i < size; i++) {
        /* call the cmp function with each element */
        if (cmp(array[i])) {
            /* if cmp returns non-zero, return the index of the element */
            return i;
        }
    }
    /* if no element matches, return -1 */
    return -1;
}

