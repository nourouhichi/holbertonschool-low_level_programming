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
while(*s != ',')
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
