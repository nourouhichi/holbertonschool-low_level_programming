#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
int i, x = size;

if (!*array || size <= 0)
return (-1);
for (i = 0;  i  != x;)
{
if (array[i] == value)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
return (i);
}
else
printf("Value checked array[%d] = [%d]\n", i, array[i]);
i++;
}
return (-1);
}
