#include "holberton.h"
/**
 * _strspn - checks the code for holberton students
 *@s:char
 *@accept:char
 *Return:unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
  unsigned int n = 0;
  while (*s != '\0')
    {
      if ((*accept != '\0') && (*s == *accept))
	{
	  n++;
	  accept++;
	}
     s++;
    }
  return (n);
}
