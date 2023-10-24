#include "lists.h"

/**
 * get_nodeint_at_index - entry
 * Description: 'Returns the nth node of a listint_t linked list'
 * @head: A pointer to the head of the list
 * @index: The index of the node, starting at 0
 *
 * Return: The nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
