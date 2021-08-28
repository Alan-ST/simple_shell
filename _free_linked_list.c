#include "holberton.h"
/**
 * free_linked_list - frees linked list
 * @list: linked list
 */
void free_linked_list(list_t *list)
{
	list_t *holder;

	while (list != NULL)
	{
		holder = list;
		list = list->next;
		free(holder->var);
		free(holder);
	}

}