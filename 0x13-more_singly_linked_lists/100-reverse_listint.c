#include "lists.h"

/**
 * reverse_listint -A function that reverses a linked list.
 * @head: param
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i;
	listint_t *j;

	i = NULL;
	j = NULL;

	while (*head != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}

	*head = i;
	return (*head);
}
