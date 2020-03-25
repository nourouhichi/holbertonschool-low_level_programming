#include "holberton.h"
/**
 *_strdup - clones a string
 *@str: a string
 *Return:apointer
 */
char *_strdup(char *str)
{
int i;
char *clone;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0';)
{
i++;
} 
clone = (char *) malloc(sizeof(char) * i);
if (clone == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
clone[i] = str[i];
}
return (clone);
}
