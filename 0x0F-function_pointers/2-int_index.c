#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *int_index - checks
 *@size: int
 *@array:an array
 *@cmp :pointer
 *Return: -1 or i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
return (-1);
if (cmp == NULL)
return (-1);
if (array == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
