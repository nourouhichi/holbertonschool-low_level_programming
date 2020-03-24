#include "lists.h"
/**
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *road_runner;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
road_runner = *head;
while (road_runner->next != NULL)
{
road_runner = road_runner->next;
}
road_runner->next = new_node;
return (new_node);
}
