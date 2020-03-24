#include "lists.h"
/**
 */
int pop_listint(listint_t **head)
{
listint_t *head2 = NULL;
int n = 0;
if (*head == NULL)
return (0);
head2 = *head;
n = head2->n;
free(head2);
return (n);
}
