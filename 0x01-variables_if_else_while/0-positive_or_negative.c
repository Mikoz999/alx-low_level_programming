#include <stdlib.h>

<<<<<<< HEAD
#include <time.h>

#include <stdio.h>

/**
 * main - prints if number is possitive, zero or negative
 * Return: Always 0(Success)
 */

int main(void)
{
	int n;
        srand(time(0))
        n = rand() - RAND_MAX / 2
      
       if (n > 0)
       {
	       printf("%d is possitive\n", n);
       }else if (n ==0)
       {
	       printf("%d is zero\n", n);
       }else
       {
	       printf("%d is negative\n", n);
       }
       return (0);
}

	       
=======
#include <time.h>

#include <stdio.h> 
  
 /** 
  * main - entry point 
  * 
  * Return:always return 0 
  * 
  */ 
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         if (n > 0) 
         { 
                 printf("%d is positive\n", n); 
         } else if (n == 0) 
         { 
                 printf("%d is zero\n", n); 
         } else 
         { 
                 printf("%d is negative\n", n); 
         } 
         return (0); 
 }
>>>>>>> 5c20d5ba9aa1eac06c1fad3a5afe0d9d2b316c5b
