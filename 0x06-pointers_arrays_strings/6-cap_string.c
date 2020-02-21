
#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 * @c : char
 * Return: Always 0.
 */
char *cap_string(char *c)
{
int i, j, k, l;
char p[] = " \n\t,.:\"(){}?!";

for (i = 0; c[i] != '\0'; i++)
;
for (j = 0; p[j] != '\0'; j++)
;
for (k = 0; k < i; k++)
{
for (l = 0; l <= j; l++)
if ((c[k] >= 'a' && c[k] <= 'z') && (c[k - 1] == p[l]))
c[k] = c[k] - 32;
}
return (c);
}
