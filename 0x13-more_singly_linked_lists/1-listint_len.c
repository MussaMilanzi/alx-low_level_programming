#include "lists.h"

/**
 * listin_len - A function that returns the number
 * of elements in a linked listin_t list
 * @h: para
 * Return: 0
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
