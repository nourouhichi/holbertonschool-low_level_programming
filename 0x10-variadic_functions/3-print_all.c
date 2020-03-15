#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 *is_a_char - print if char
 *@p:pointer to args
 */
void is_a_char(va_list p)
{
printf("%c", va_arg(p, int));
}
/**
 *is_an_int - print if int
 *@p:pointer to args
 */
void is_an_int(va_list p)
{
printf("%d", va_arg(p, int));
}
/**
 *is_a_float - prints if float
 *@p:pointer to args
 */
void is_a_float(va_list p)
{
printf("%f", va_arg(p, double));
}
/**
 *is_a_string - prints if string
 *@p:pointer to args
 */
void is_a_string(va_list p)
{
char *ptr;
ptr = va_arg(p, char*);
if (ptr == NULL)
{
ptr = "(nil)";
}
printf("%s", ptr);
}
/**
 *print_all - prints anything
 *@format:a pointer
 */
void print_all(const char * const format, ...)
{
va_list p;
int i = 0;
char x;
char *nothing;
while (format == NULL)
{
printf("\n");
return;
}
va_start(p, format);
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
is_a_char(p);
break;
case 'i':
is_an_int(p);
break;
case 'f':
is_a_float(p);
break;
case 's':
is_a_string(p);
break;
printf("%s", nothing);
break;
}
x = format[i];
if ((format[i + 1] != '\0') && (x == 'i' || x == 'c' || x == 's' || x == 'f'))
printf(", ");
i++;
}
printf("\n");
va_end(p);
}
