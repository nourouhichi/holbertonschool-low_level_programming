#ifndef ARGS
#define ARGS
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void is_a_string(va_list p);
void is_an_int(va_list p);
void is_a_float(va_list p);
void is_a_char(va_list p);
#endif
