#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of
 * a linked list
 * @head: head of list
 * Return: sum of all data (n)
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
