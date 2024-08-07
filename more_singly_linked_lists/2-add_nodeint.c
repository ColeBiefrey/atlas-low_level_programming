#include "lists.h"

/**
 * add_nodeint - add new node at beginning
 * of linked list
 * @head: head of list
 * @n: n element
 * Return: address of new element. NUll if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
