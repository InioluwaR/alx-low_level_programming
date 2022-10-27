#include "lists.h"
/**
 * pop_listint - pops a node out
 * a linked list
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
