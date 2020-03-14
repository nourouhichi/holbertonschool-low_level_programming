#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_strings - checks
 *@n:int
 *@separator:char
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list p;
unsigned int i;
va_start(p, n);
for (i = 0; i < n; i++)
{
if (p != NULL)
printf("%s", va_arg(p, char *));
else
printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(p);
}
