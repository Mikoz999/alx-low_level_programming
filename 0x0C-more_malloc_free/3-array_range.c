#include "main.h" 
#include <stdlib.h> 

/** 
 * array_range - creates an array of integers that includes min and max. 
 * @min: minimum value 
 * @max: maximum value 
 * 
 * Return: integer pointer to the new array, or NULL if malloc fails or if min > max. 
 */ 
int *array_range(int min, int max) 
{ 
    int *ar, i = 0, n, m; 

    n = min; 
    m = max; 

    if (n > m) 
        return (NULL); 

    ar = malloc((sizeof(int) * (m - n + 1))); 

    if (ar == NULL) 
        return (NULL); 

    while (n <= m) 
    { 
        ar[i] = n; 
        i++; 
        n++; 
    } 

    return (ar); 
}

