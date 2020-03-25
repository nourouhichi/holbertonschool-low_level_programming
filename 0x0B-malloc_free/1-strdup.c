#include "holberton.h"
/**
 *size - returns the size of a string
 *@str:the string
 *Return:int
 */
int size(char *str)
{
int i;
for (i = 0; str[i] != '\0';)
{
i++;
}
return (i);
}
/**
 *_strdup - clones a string
 *@str: a string
 *Return:apointer
 */
char *_strdup(char *str)
{
int i = size(str);
char *clone = malloc(sizeof(char) * i);
if (clone == NULL)
return (NULL);
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{
clone[i] = str[i];
}
return (clone);
}
