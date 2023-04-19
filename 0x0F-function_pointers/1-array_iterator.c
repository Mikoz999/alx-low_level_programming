#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Execute a given function on each element of an array.
 *
 * @array: Array of integers.
 * @size: Size of the array.
 * @action: Pointer to the function to execute.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int i;

    /* Check if array and action are not null */
    if (array == NULL || action == NULL) {
        return;
    }

    /* Iterate over the array and execute action on each element */
    for (i = 0; i < size; i++) {
        action(array[i]);
    }
}

