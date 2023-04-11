#include "main.h" 
 #include <stdlib.h> 
  
 /**
  * Function: str_concat 
  * str_concat - concatenated
  * @s1: First string to be concatenated upon. 
  * @s2: Second string to be concatenated to s1.
  * 
  * Return: NULL if concatenation fails.
  */ 
 char *str_concat(char *s1, char *s2) 
 { 
         int i, concat_i = 0, len = 0; 
         char *str; 
  
         if (s1 == NULL) 
                 s1 = ""; 
  
         if (s2 == NULL) 
                 s2 = ""; 
  
         for (i = 0; s1[i] || s2[i]; i++) 
                 len++; 
  
         str = malloc(sizeof(char) * len); 
  
         if (str == NULL) 
                 return (NULL); 
  
         for (i = 0; s1[i]; i++) 
                 str[concat_i++] = s1[i]; 
  
         for (i = 0; s2[i]; i++) 
                 str[concat_i++] = s2[i]; 
  
         return (str); 
 }

