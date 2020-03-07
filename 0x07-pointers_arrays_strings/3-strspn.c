#include "holberton.h"
/**
 * _strspn - checks the code for holberton students
 *@s:char
 *@accept:char
 *Return:unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i;
<<<<<<< HEAD
while(*s != ',')
=======
while (*s != ',')
>>>>>>> 811de4576fed1f458f809bbdc233f9212f7f2e87
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
n++;
}
}
s++;
}
return (n);
}
