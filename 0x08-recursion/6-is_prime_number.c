#include "holberton.h"
/**
 *transformer - cheks the code for us
 *@b: int
 *@a:int
 *Return:int
 */
int transformer(int a, int b)
{
if (a > b / 2)
return (1);
else if (b < 2)
return (0);
else
return (transformer(a + 1, b));
}
/**
 *is_prime_number - cheks the code for holberton students
 *@n :int
 *Return: int;
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
else
return (transformer(2, n));
}
