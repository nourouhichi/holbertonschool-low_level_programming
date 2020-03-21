#include "lists.h"
/**
 *free_list - deletes list_t list
 *@head:pointer
 */
void free_list(list_t *head)
{
  list_t *road_runner;
  list_t *bowl;
road_runner = head;
while(road_runner != NULL)
{
bowl = road_runner->next;
free (road_runner);
road_runner = bowl;
}
}
