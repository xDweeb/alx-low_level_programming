#include "lists.h"

/**
 * free_listint - entry
 * Description: 'Frees a listint_t list'
 * @head: A pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
