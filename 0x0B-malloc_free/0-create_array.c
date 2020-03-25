#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - cheks the code for holberton students
 *@c:char
 *@size:unsigned int
 *Return:a pointer to the array or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p = malloc(size * sizeof(char *));
if (c == '\0' || size == 0 || p == NULL)
return (NULL);
for (i = 0 ; i < size; i++)
p[i] = c;
return (p);
}
