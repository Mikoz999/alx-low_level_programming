#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the corresponding function,
 * or NULL if the operator is invalid
 */

int (*get_op_func(char *s))(int, int) 
 { 
         op_t ops[] = { 
                 {"+", op_add}, 
                 {"-", op_sub}, 
                 {"*", op_mul}, 
                 {"/", op_div}, 
                 {"%", op_mod}, 
                 {NULL, NULL} 
         }; 
         int i; 
  
         for (i = 0; i < 5; i++) 
         { 
                 if (*ops[i].op == *s) 
                         return (ops[i].f); 
         } 
  
         return (NULL); 
 }

