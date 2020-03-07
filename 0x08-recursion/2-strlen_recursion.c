#include "holberton.h"
/**
 * _strlen_recursion - cheks the code for holberton school students
 *@s: char
 *Return: char
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (*s != '\0')
{
n = _strlen_recursion(s + 1) + 1;
}
return (n);
}
