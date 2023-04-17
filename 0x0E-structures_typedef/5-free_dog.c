#include <stdlib.h> 
#include "dog.h" 
  
/** 
 * free_dog - frees memory allocated for a dog struct 
 * @d: pointer to the dog struct to be freed 
 */ 
void free_dog(dog_t *d) 
{ 
    if (d != NULL) 
    { 
        free(d->owner); // free memory allocated for owner name 
        free(d->name);  // free memory allocated for dog name 
        free(d);        // free memory allocated for dog struct 
    } 
}

