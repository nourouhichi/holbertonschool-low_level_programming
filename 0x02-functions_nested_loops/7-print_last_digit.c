#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @n : variable
* Return: same variable as input.
*/
int print_last_digit(int n)
{
int x;
if (n >= 0)
x = n % 10;
else
x = (n % 10) * -1;
_putchar(x + '0');
return (x);
}
