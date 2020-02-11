#include "holberton.h"
/**
*print_alphabet_x10 - check the code for Holberton School students.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
int j = 1;
while (j <= 10)
{
int i = 'a';
while (i <= 'z')
{
_putchar(i);
i++;
}
i = 'a';
j++;
_putchar('\n');
}
return;
}
