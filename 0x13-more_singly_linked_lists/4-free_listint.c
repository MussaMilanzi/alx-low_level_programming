#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: param
 *
 * Return: void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp_var;

	while ((tmp_var = head) != NULL)
	{
		head = head->next;
		free(tmp_var);
	}
}
