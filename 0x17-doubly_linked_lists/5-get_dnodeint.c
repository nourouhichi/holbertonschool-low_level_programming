#include "lists.h"
/**
 * */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

if(!head)
return(NULL);

while (i < index)
{
if (!(head->next))
return (NULL);
head = head->next;
i++;
}
return (head);
}