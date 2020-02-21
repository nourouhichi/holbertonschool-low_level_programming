#include "holberton.h"
/**
 * reverse_array - check the code for Holberton School students.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0, t;
int y[509];
while (i < n)
{
y[i] = a[i];
i++;
}
i--;
for (t = i; t >= 0; t--)
a[i - t] = y[t];
}
