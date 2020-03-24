#include "lists.h"
/**
 *get_nodeint_at_index - gets the nth node
 *@head: pointer
 *@index:n
 *Return:node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (i < index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
i++;
}
return (head);
}
