#include "lists.h"
/**
 * free_dlistint_t - frees a linked list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *roadrunner;

if (!head)
return;
while (head)
{
roadrunner = head->next;
free(head);
head = roadrunner;
}
}