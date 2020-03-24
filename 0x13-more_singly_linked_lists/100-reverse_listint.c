#include "lists.h"
/**
 *reverse_listint - reverses a list
 *@head:pointer
 *Return:listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *before, *after;
before = NULL;
while (*head != NULL)
{
after = (*head)->next;
(*head)->next = before;
before = *head;
*head = after;
}
*head = before;
return (*head);
}
