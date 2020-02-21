#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 * @c : char
 * Return: Always 0.
 */
char *rot13(char *c)
{
int i, j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (a[j] == c[i])
{
c[i] = rot[j];
break;
}
}
}
return (c);
}
