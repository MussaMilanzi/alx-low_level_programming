#include "lists.h"

/**
 * free_listpointer - function that frees a linked list
 * @head: param
 *
 * Return: void
 */
void free_listpointer(listpointer_s **head)
{
	listpointer_s *tmp_ptr;
	listpointer_s *new_node;

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


/**
 * free_listint_safe - Function that frees a linked list.
 * @h: param
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n_node = 0;
	listpointer_s *head_ptr;
	listpointer_s *new_n;
	listpointer_s *next_node;
	listint_t *new_node;

	head_ptr = NULL;
	for (; *h != NULL; n_node++)
	{
		new_n = malloc(sizeof(listpointer_s));

		if (new_n == NULL)
			exit(98);

		new_n->p = (void *)*h;
		new_n->next = head_ptr;
		head_ptr = new_n;

		next_node = head_ptr;

		for (; next_node->next != NULL; n_node++)
		{
			next_node = next_node->next;
			if (*h == next_node->p)
			{
				*h = NULL;
				free_listpointer(&head_ptr);
				return (n_node);
			}
		}

		new_node = *h;
		*h = (*h)->next;
		free(new_node);
	}

	*h = NULL;
	free_listpointer(&head_ptr);
	return (n_node);
}
