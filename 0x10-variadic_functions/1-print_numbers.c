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
va_start(p, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(p, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(p);
}
