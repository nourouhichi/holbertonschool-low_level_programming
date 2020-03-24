#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node
 *@head:pointer
 *@index:index
 *Return:int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *road_runner;
listint_t *bowl;
road_runner = *head;
if (!head || !*head)
return (-1);
if (index == 0)
{
road_runner = (*head)->next;
free(*head);
*head = road_runner;
return (1);
}
while ((road_runner != NULL) && (i != index - 1))
{
road_runner = road_runner->next;
i++;
if (road_runner == NULL)
return (-1);
}
bowl = road_runner->next;
road_runner->next = bowl->next;
free(bowl);
return (1);
}
