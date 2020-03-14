#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_numbers - checks
 *@separator:char
 *@n:int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int i;
if (n == 0)
return;
va_start(p, n);
if (separator != NULL)
{
for (i = 0; i < (n - 1); i++)
printf("%d%s", va_arg(p, int), separator);
printf("%d\n", va_arg(p, int));
}
else
{
for (i = 0; i < n; i++)
printf("%d", va_arg(p, int));
printf("\n");
}
va_end(p);
}
