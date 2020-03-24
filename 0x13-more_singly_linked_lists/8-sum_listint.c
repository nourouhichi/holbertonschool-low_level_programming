#include "lists.h"
/**
 *sum_listint - sums all n
 *@head:pointer
 *Return:int
 */
int sum_listint(listint_t *head)
{
int n = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
n += head->n;
head = head->next;
}
return (n);
}
