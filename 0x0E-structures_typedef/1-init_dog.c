#include <stdlib.h>
#include " dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * init_dog - initialise struct dog
 * @d: the variable
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return;
else
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
