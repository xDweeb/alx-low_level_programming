#include "lists.h"

/**
 * sum_listint - entry
 * Description: 'sum of all the data (n) of a listint_t linked list'
 * @head: A pointer to the head of the list
 *
 * Return: The sum of all the data, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
