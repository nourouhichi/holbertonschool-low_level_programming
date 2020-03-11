#include "dog.h"
#include <stdlib.h>

/**
 * LEN - get length of string
 * @s: int
 * Return: int 
 */

int LEN(char *s)
{
	int c;
	for (c = 0; s[c] != '\0'; c++)
	;
	return (c);
}

/**
 */

dog_t *new_dog(char *name, float age, char *owner)
{
  int i;
  dog_t *dog_liza;
  dog_liza = malloc(sizeof(dog_t));

  /* check for allocation failure */
  if (dog_liza == NULL)
    return (NULL);

  /* locate space in memory for name */

  dog_liza->name = malloc(LEN(name));
  if (dog_liza->name == NULL)
  {
    free(dog_liza);
    return (NULL); 
  }

  dog_liza->owner = malloc(LEN(owner));
  if (dog_liza->owner == NULL)
    {
     
      free(dog_liza->name);
      free(dog_liza);
      return(NULL);
    }

  for (i = 0; name[i] != '\0'; i++)
    dog_liza->name[i] = name[i];
  
  for (i = 0; owner[i] != '\0'; i++)
    dog_liza->owner[i] = owner[i];

  dog_liza->age = age;

  return (dog_liza);
}
