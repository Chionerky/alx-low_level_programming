#include <stdlib.h>
#include "dog.h"
/**
* init_dog - variables for struct dog
* @d: pointer
* @name: first input
* @age: second input
* @owner: third input
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
