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
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: param
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n_node = 0;
	listpointer_s *head_ptr, *new_n, *next_node;

	head_ptr = NULL;

	for (; head != NULL; n_node++)
	{
		new_n = malloc(sizeof(listpointer_s));
		if (new_n == NULL)
		{
			exit(98);
		}
		new_n->p = (void *)head;
		new_n->next = head_ptr;
		head_ptr = new_n;
		for (; next_node->next != NULL; n_node++)
		{
			next_node = next_node->next;
			if (head == next_node->p)
			{
				n_node = 1;
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listpointer(&head_ptr);
				return (n_node);
			}

		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		break;
	}
	free_listpointer(&head_ptr);
	return (n_node);
}
