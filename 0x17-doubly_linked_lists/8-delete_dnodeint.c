#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: the haed of the list
 * @index: the index
 * Return: 0 or 1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *road_runner;
	dlistint_t *bowl;

	if (!*head || !head)
		return (-1);
	road_runner = *head;
	if (index == 0)
	{
		*head = road_runner->next;
		if (road_runner->next)
			road_runner->next->prev = NULL;
		free(road_runner);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!(road_runner->next))
			return (-1);
		road_runner = road_runner->next;
	}
	bowl = road_runner->next;
	road_runner->next = bowl->next;
	if (bowl->next)
	{
		bowl->next->prev = road_runner;
	}
	free(bowl);
	return (1);
	}

