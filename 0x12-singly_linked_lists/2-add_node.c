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
 *add_node - adds a new first node
 *@head:pointer
 *@str:string
 *Return:adress
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = size(str);
new_node->next = *head;
*head = new_node;
return (*head);
}
