#include "lists.h"

/**
 * free_listint2 - A function that frees a linked list
 * @head:param
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp_ptr;
	listint_t *new_node;

	if (head != NULL)
	{
		new_node = *head;
		while ((tmp_ptr = new_node) != NULL)
		{
			new_node = new_node->next;
			free(tmp_ptr);
		}
		*head = NULL;
	}
}
