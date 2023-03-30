
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node, *temp;
	size_t nchar;

	first_node = malloc(sizeof(list_t));
	if (first_node == NULL)
		return (NULL);

	first_node->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	first_node->len = nchar;

	first_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = first_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = first_node;
	}

	return (*head);
}
