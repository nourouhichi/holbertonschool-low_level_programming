#include "holberton.h"
/**
 *binary_to_uint - converts from bin to dec
 *@b: binary
 *Return: result
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int pow = 1, res = 0;
if (!b)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if ((b[i] != '0') && (b[i] != '1'))
return (0);
}
for (i--; i >= 0; i--)
{
if (b[i] == '1')
{
res += pow;
}
pow *= 2;
}
return (res);
}
