#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: the head address
 * @idx: the index
 * @n:data
 * Return: a node address or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *road_runner;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	road_runner = *h;
	if (!road_runner)
	{
		*h = new_node;
		new_node->next = NULL;
		return (new_node); }
	if (idx == 0)
	{
		(*h)->prev = new_node;
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node); }
	while ((road_runner) && (i != (idx - 1)))
	{
		road_runner = road_runner->next;
		i++;
		if (!road_runner)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = road_runner->next;
	new_node->prev = road_runner;
	road_runner->next = new_node;
	road_runner = road_runner->next;
	road_runner->prev = new_node;
	return (new_node);
}

