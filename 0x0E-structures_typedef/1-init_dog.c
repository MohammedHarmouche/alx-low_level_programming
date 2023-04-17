#include "dog.h"
#include <stdlib.h>

/**
   * init_dog - initialize dog stuct.
    * @d: the dog to be intialized.
     * @name: dog's name.
      * @age: dog's age.
       * @owner: dog's owner.
 	*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d != NULL)	
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
