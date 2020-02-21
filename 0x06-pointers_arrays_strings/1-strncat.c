#include "holberton.h"
/**
 * _strncat - check the code for Holberton School students.
 * @dest : char
 * @src : char
 * @n : int
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n; j++)
dest[i + j] = src[j];
return (dest);
}
