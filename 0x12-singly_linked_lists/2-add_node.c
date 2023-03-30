#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;
	size_t nchar;

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);

	first_node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	first_node->len = nchar;
	first_node->next = *head;
	*head = first_node;

	return (*head);
}
