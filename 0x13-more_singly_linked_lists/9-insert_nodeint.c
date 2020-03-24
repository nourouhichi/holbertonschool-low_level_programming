#include "lists.h"
/**
 *insert_nodeint_at_index - insert a node
 *@head:pointer
 *@idx:index
 *@n:int
 *Return:adress
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *new_node;
listint_t *road_runner;
if (!head || *head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
road_runner = *head;
if (road_runner == NULL)
{
*head = new_node;
new_node->next = NULL;
return (new_node);
}
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
while ((road_runner != NULL) && (i < (idx - 1)))
{
road_runner = road_runner->next;
i++;
if (!road_runner)
{
free(new_node);
return (NULL);
}
}
new_node->next = road_runner->next;
road_runner->next = new_node;
return (new_node);
}
