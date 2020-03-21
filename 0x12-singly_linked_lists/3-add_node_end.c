#include "lists.h"
/**
 *size - counts the length of a string
 *@str:the string to count its length
 *Return:the length of the string
 */
unsigned int size(const char *str)
{
unsigned int i;
for (i = 0; str[i] != '\0'; )
{
i++;
}
return (i);
}
/**
 *add_node_end - adds a new first node
 *@head:pointer
 *@str:string
 *Return:adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *road_runner;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = size(str);
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
