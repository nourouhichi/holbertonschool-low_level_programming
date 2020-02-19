#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 * @s : char
 * Return: Always 0.
 */
void print_rev(char *s)
{
int i, j;
while (s[i] != '\0')
{
i++;
}
for (j = i - 1; j >= 0; i--)
{
_putchar(s[j]);
}
_putchar('\n');
}
