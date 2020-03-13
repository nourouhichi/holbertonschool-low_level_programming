#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - checks
 *@array: array
 *@size: number
 *@action:function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action != NULL && array != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
