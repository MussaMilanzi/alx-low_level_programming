#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at index
 * of a linked list.
 * @head: param1
 * @index: param2
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *n_node;
	listint_t *next;

	n_node = *head;

	if (index != 0)
	{
		for (i = 0; (i < index - 1) && (n_node != NULL); i++)
		{
			n_node = n_node->next;
		}
	}

	if (n_node == NULL || (n_node->next == NULL && index != 0))
	{
		return (-1);
	}

	next = n_node->next;

	if (index != 0)
	{
		n_node->next = next->next;
		free(next);
	}
	else
	{
		free(n_node);
		*head = next;
	}

	return (1);
}
