#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str : char
 * Return: Always 0.
 */
void puts2(char *str)
{
int i, c;
for (i = 0; str[i] != '\0'; i++)
;
for (c = 0; c <= i - 1; c = c + 2)
_putchar(str[c]);
_putchar('\n');
}
