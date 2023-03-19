<<<<<<< HEAD
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
 /** 
  * main - Entry point 
  * 
  * Return: Always 0 (Success) 
  */ 
 int main(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
  
         if (n > 0) 
         { 
         printf("%d is positive\n", n); 
         } 
         else if (n < 0) 
         { 
         printf("%d is negative\n", n); 
         } 
         else 
         { 
         printf("%d is zero\n", n); 
         } 
         return (0); 
 }
=======
#include <stdlib.h>

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
>>>>>>> 822edc171b31f6e6650c46d9ca09c3a022f5e383
