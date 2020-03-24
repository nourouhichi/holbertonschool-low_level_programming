#include "lists.h"
/**
 *listint_len - returns the length of a list
 *@h:list_t
 *Return:size_t number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
