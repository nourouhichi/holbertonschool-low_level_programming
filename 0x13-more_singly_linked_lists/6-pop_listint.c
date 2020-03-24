#include "lists.h"
/**
 *pop_listint - deletes the head
 *@head:listint_t
 *Return: int
 */
int pop_listint(listint_t **head)
{
listint_t *head2 = NULL;
int n = 0;
if (*head == NULL)
return (0);
head2 = *head;
n = head2->n;
*head = head2->next;
free(head2);
return (n);
}
