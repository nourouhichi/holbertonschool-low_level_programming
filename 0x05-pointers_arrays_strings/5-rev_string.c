#include "holberton.h"
/**
 * rev_string - check the code for Holberton School students.
 * @s : char
 * Return: Always 0.
 */
void rev_string(char *s)
{
char q[509];
int i = 0, j;
while (s[i] != '\0')
{
q[i] = s[i];
i++;
}
i--;
for (j = i; j >= 0; j--)
{
s[i - j] = q[j];
}
}
