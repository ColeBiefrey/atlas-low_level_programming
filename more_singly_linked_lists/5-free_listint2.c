#include "lists.h"

/**
 * free_listint2 - frees linked list
 * @head: head of list
 * Return: no return
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}
