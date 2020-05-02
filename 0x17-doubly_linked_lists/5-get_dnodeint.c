#include "lists.h"
/**
 * get_dnodeint_at_index - get index at nth position
 * @head: head if the list
 * @index: the position
 * Return: a node address or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *roadrunner;

	if (!head)
		return (NULL);
	roadrunner = head;
	while (i < index)
	{
		if (!(roadrunner->next))
			return (NULL);
		roadrunner = roadrunner->next;
		i++;
	}
	return (roadrunner);
}

