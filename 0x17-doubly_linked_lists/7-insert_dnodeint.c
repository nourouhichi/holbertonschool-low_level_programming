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
		if (idx > 0)
		{
			free(new_node);
			return (NULL);
		}
		return (add_dnodeint(h, n)); }
	if (idx == 0)
	{
		return (add_dnodeint(h, n)); }
	if (idx ==  dlistint_len(*h))
		return (add_dnodeint_end(h, n));
	while ((road_runner) && (i != (idx - 1)))
	{
		road_runner = road_runner->next;
		i++;
		if (!road_runner)
		{
			free(new_node);
			return (NULL); }
	}
	new_node->next = road_runner->next;
	new_node->prev = road_runner;
	road_runner->next = new_node;
	road_runner = road_runner->next;
	road_runner->prev = new_node;
	return (new_node);
}

