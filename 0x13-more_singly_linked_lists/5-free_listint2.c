#include "lists.h"
/**
 *free_listint2 - frees a list
 *@head:pointer
 */
void free_listint2(listint_t **head)
{
listint_t *bowl;
listint_t *road_runner;
if (head == NULL)
return;
road_runner = *head;
while (road_runner != NULL)
{
bowl = road_runner;
road_runner = road_runner->next;
free(bowl);
}
*head = NULL;
}
