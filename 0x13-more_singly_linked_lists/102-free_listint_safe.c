#include "lists.h"

/**
 * free_listint_safe - Function that frees a linked list.
 * @h: param
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_node = 0;
	listint_t *head_ptr, *new_n, *next_node;
	listint_t *new_node;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new_n = malloc(sizeof(listint_t));

		if (new_n == NULL)
			exit(98);

		new_n->p = (void *)*h;
		new_n->next = head_ptr;
		head_ptr = new_n;

		next_node = head_ptr;

		while (next_node->next != NULL)
		{
			next_node = next_node->next;
			if (*h == next_node->p)
			{
				*h = NULL;
				free_listint2(&head_ptr);
				return (n_node);
			}
		}

		new_node = *h;
		*h = (*h)->next;
		free(new_node);
		n_node++;
	}

	*h = NULL;
	free_listint2(&head_ptr);
	return (n_node);
}
