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

	if (!head)
		return (NULL);
	while (i < index)
	{
		if (!(head->next))
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}

