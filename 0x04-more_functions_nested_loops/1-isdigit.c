#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @c : variable
* Return: same variable as input.
*/
int _isdigit(int c)
{
if ((c >= 0) && (c <= 9))
return(1);
return(0);
}
