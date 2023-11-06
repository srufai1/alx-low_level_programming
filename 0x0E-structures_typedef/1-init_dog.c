#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: name to initialize
* @age: age to initialize
* @owner: owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
{
/*Handle memory allocation failure*/
return;
}
}
if (name != NULL)
{
d->name = malloc(strlen(name) + 1);
if (d->name != NULL)
{
strcpy(d->name, name);
}
else
{
return;
}
}
if (owner != NULL)
{
d->owner = malloc(strlen(owner) + 1);
if (d->owner != NULL)
{
strcpy(d->owner, owner);
}
else
{
free(d->name);
return;
}
}
d->age = age;
}

