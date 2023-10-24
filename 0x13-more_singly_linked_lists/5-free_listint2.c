#include "lists.h"

/**
 * free_listint2 - entry
 * Description: 'Frees a listint_t list and sets the head to NULL'
 * @head: A pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
