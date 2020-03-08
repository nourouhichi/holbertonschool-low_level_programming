#include "holberton.h"
/**
* _print_rev_recursion - check the code for Holberton School students.
* @s : char
* Return: Always 0.
*/
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
/**
 *is_palindrome - cheks the code 
 *@s: char
 *Return:int
 */
int is_palindrome(char *s)
{
char *y = '\0';
if (*s != '\0')
{
*y = *s;
is_palindrome(s+1);
}
_print_rev_recursion(y);
if (*y == *s)
return (1);
else
return (0);
}
