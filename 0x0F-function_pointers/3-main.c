#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point for the calculator program
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 *
 * Return: 0 on success, otherwise a non-zero error code
 */

int main(int argc, char *argv[]) 
 { 
         int (*fxn)(int, int); 
  
         if (argc != 4) 
         { 
                 printf("Error\n"); 
                 exit(98); 
         } 
         fxn = get_op_func(argv[2]); 
  
         if (!fxn) 
         { 
                 printf("Error\n"); 
                 exit(99); 
         } 
         printf("%d\n", fxn(atoi(argv[1]), atoi(argv[3]))); 
         return (0); 
 }

