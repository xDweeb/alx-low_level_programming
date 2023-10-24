#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - entry
 * Description: 'Frees a listint_t linked list.'
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *temp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp == *h)
		{
			*h = NULL;
			return (size);
		}
	}

	*h = NULL;
	return (size);
}
