#include "main.h" 
 #include <stdlib.h> 
  
 /** 
  * Function: alloc_grid Description
  * Allocates memory for a 2 dimensional array of integers.
  * @width: Width of the array.
  * @height: Height of the array.
  *
  * Return: Pointer to the array of integers.
  */ 
 int **alloc_grid(int width, int height) 
 { 
         int i, j; 
         int **grid; 
  
         if (width < 1 || height < 1) 
                 return (NULL); 
  
         grid = malloc(sizeof(int *) * height); 
  
         if (grid == NULL) 
         { 
                 free(grid); 
                 return (NULL); 
         } 
  
         for (i = 0; i < height; i++) 
         { 
                 grid[i] = malloc(sizeof(int) * width); 
  
                 if (grid[i] == NULL) 
                 { 
                         for (i--; i >= 0; i--) 
                                 free(grid[i]); 
                         free(grid); 
                         return (NULL); 
                 } 
         } 
  
         for (i = 0; i < height; i++) 
                 for (j = 0; j < width; j++) 
                         grid[i][j] = 0; 
  
         return (grid); 
 }
