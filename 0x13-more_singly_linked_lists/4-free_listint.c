#include "lists.h"
/**
 */
void free_listint(listint_t *head)
{
listint_t *bowl;
while (head != NULL)
{
bowl = head;
head = head->next;
free(bowl);
}
}
