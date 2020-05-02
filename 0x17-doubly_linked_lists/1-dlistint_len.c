#include "lists.h"
/**
 * dlistint_len - counts number of elements of a linked list
 * @h: head of the list
 * Return: size_t the size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;
	const dlistint_t *counter;

	if (!h)
		return (0);
	counter = h;
	while (counter)
	{
		x++;
		counter = counter->next;
	}
	return (x);
}
