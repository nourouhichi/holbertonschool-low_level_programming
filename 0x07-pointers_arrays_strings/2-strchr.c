#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - cheks the code for jolberton students
 *@s:char
 *@c:c
 *Return:char
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c) 
{
return (s);
}
s++;
}
return (NULL);
}
