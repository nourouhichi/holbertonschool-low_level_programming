#include "dog.h"
/**
 *init_dog - cheks
 *@d:pointer
 *@name:char
 *@age:int
 *@owner:char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
