#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_dog - function that frees dogs
*@d: dog to free
*Return: Nothing
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
