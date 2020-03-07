#include "holberton.h"
#include <stdlib.h>
/**
 *_strpbrk - cheks the code to holberton students
 *@s : char 
 *@accept : char 
 *Return: char
 */
char *_strpbrk(char *s, char *accept)
{
int i,j;
i = 0;
j = 0;
while (s[i] != '\0')
{
while (accept[j] != '\0')
{
if (s[i] == accept[j])
{
return (s + i);
}
else
{
j++;
}
}
i++;
}
return (NULL);
}

