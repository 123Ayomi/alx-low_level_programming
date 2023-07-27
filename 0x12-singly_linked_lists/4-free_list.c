#include <stdlib.h>
#include "lists.h"

/**
  * free_list - It Frees a linked list.
  * @head: Pointer to the first node of linked list
  * Return: Nothing 0
  */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
