#include "lists.h"

/**
 * sum_listint - Function returns the sum of all the data (n) of
 * a linked list.
 * @head: param
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	int i;

	sum = 0;
       for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
