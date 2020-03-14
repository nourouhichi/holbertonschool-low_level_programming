#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *sum_them_all - checks
 *@n: int
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list p;
unsigned int i;
if (n == 0)
return (0);
va_start(p, n);
for (i = 0; i < n; i++)
sum += va_arg(p, int);
va_end(p);
return (sum);
}
