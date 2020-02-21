#include "holberton.h"
/**
 * leet - check the code for Holberton School students.
 * @c : char
 * Return: Always 0.
 */
char *leet(char *c)
{
int i, j;
char x[] = "aeotl";
char n[] = "43071";
for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; x[j] != '\0'; j++)
{
if (c[i] == x[j] || c[i] == (x[j] - 32))
{
c[i] = n[j];
}
}
}
return (c);
}
