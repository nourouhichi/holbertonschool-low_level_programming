#include "lists.h"
/**
 *print_dlistint - prints a doubly linked list elements
 * @h: the head of the linked list
 * Return: size_t number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *roadrunner;
	int x = 0;

	if (!h)
		return (0);
	roadrunner = h;
	while (roadrunner)
	{
		printf("%d\n", roadrunner->n);
		roadrunner = roadrunner->next;
		x++;
	}
	return (x);
}

