#include "lists.h"
/**
 *free_listint - frees list
 *@head:pointer to the head of a list
 */
void free_listint(listint_t *head)
{
listint_t *bowl;
if (head == NULL)
return;
while(head != NULL)
{
bowl = head;
head = head->next;
free(bowl);
}
}
