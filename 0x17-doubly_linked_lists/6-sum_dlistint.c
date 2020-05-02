#include "lists.h"
/**
 *sum_dlistint - sums all n
 *@head:pointer
 *Return:the sum of all elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	if (!head)
		return (0);
	while (head)
	{
		n += head->n;
		head = head->next;
	}
		return (n);
}

