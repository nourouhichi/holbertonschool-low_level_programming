#include "lists.h"
/**
 * add_dnodeint_end - adds a node
 * @head: the head of the node
 * @n: data
 * Return: a node address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_end = malloc(sizeof(dlistint_t));
	dlistint_t *roadrunner;

	if ((!head) || (!new_end))
		return (NULL);
	roadrunner = *head;
	new_end->n = n;
	if (*head)
	{
		while (roadrunner->next)
		{
			roadrunner = roadrunner->next;
		}
		new_end->prev = roadrunner;
		roadrunner->next = new_end;
		new_end->next = NULL;
	}
	else
	{
		*head = new_end;
}
	return (new_end);

}
