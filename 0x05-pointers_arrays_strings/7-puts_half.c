#include <stdio.h>
#include <string.h>
#include "holberton.h"
/**
* puts_half- print the last half of a string.
* @str : the string.
* Return: Always 0 (success)
*/
void puts_half(char *str)
{
int n = 0;
int i, j;
for (j = 0; str[j] != '\0'; j++)
;
if (j % 2 == 0)
n = j / 2;
else
n = ((j - 1) / 2) + 1;
for (i = n; i <= j - 1; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
