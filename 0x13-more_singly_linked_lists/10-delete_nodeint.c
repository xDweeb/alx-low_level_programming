#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - entry
 * Description: 'Deletes the node at a given index'
 * @head: A pointer to the head of the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	current = *head;
	while (current != NULL)
	{
		if (i == index - 1)
		{
			if (current->next != NULL)
			{
				temp = current->next;
				current->next = temp->next;
				free(temp);
				return (1);
			}
			else
				return (-1);
		}
		current = current->next;
		i++;
	}

	return (-1);
}
