#include "holberton.h"
/**
 * string_toupper - check the code for Holberton School students.
 * @c : char
 * Return: Always 0.
 */
char *string_toupper(char *c)
{
int r;
for (r = 0; c[r] != '\0'; r++)
{
if (c[r] >= 'a' && c[r] <= 'z')
{
c[r] = c[r] - 32;
}
}
return (c);
}
