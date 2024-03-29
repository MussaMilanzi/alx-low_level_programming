#include "lists.h"

/**
 * print_listint - A function that prints all the elements
 * of a listint_t list
 * @h: para
 * Return: 0
 */

size_t print_listint(const listint_t *h)
{

	size_t count = 0;

	for (; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
