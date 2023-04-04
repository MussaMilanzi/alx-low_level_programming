#include "lists.h"

/**
 * insert_nodeint_at_index - A function inserts a new node
 * at a given position.
 * @head: param1
 * @idx: param2
 * @n: param3
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *j;

	j = *head;

	if (idx != 0)
	{
		for (i = 0; (i < idx - 1) && (j != NULL); i++)
		{
			j = j->next;
		}
	}

	if ((j == NULL) && (idx != 0))
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = j->next;
		j->next = new_node;
	}

	return (new_node);
}
