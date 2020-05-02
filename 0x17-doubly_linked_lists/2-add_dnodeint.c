#include "lists.h"
/**
 * add_dnodeint - adds node at the start of a ll
 * @head:pointer to the pointer of the head
 * @n: data
 * Return: NULL if fails pointer to the new node if not
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head)
	{
		(*head)->prev = new;
		new->next = *head;
	}
		*head = new;
		return (new);
}

