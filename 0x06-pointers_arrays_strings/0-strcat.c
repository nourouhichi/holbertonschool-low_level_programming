#include "holberton.h"
/**
 * _strcat - check the code for Holberton School students.
 * @dest : char
 * @src : char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
;
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
return (dest);
}
