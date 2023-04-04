#include "lists.h"

/**
 * pop_listint - A function that  deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: param
 *
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int node_n;
	listint_t *j;

	listint_t *new_node;

	if (*head == NULL)
		return (0);

	new_node = *head;

	node_n = new_node->n;

	j = new_node->next;

	free(new_node);

	*head = j;

	return (node_n);
}
