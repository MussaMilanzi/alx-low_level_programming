#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *first_node;

	while ((first_node = head) != NULL)
	{
		head = head->next;
		free(first_node->str);
		free(first_node);
	}
}
