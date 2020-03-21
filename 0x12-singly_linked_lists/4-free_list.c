#include "lists.h"
/**
 *free_list - deletes list_t list
 *@head:pointer
 */
void free_list(list_t *head)
{
list_t *bowl;
while (head != NULL)
{
bowl = head;
head = head->next;
free(bowl);
}
}
