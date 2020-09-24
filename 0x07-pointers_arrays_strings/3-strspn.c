#include "holberton.h"
#include "stdio.h"
/**
 * _strspn - checks the code for holberton students
 *@s:char
 *@accept:char
 *Return:unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
int j, i;
unsigned int count = 0;

for  (i = 0; accept[i] != '\0'; i++ )
{
	for (j = 0; s[j] != ' '; j++)
	{
		if (s[j] == accept[i])
			count = count + 1;
	}
}
return (count);
}
