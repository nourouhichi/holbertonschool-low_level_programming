#include "holberton.h"
/**
 *_memcpy - cheks the code for holberton students
 *@dest:char
 *@src:char
 *@n:unsigned int
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
