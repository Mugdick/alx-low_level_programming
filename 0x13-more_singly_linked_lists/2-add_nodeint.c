#include "lists.h"

/**
 * add_nodeint - it adds a new node at the beginning
 *               of a list.
 * @head: pointer to the address of the
 *        head of the listint_t
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Else - the address of the new element.
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

	return (new);
}
