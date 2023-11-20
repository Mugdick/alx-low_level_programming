#include "lists.h"
#include <stdio.h>

/**
 * listint_len - it returns the number of elements
 *               in a linked listint_t list.
 * @h: pointer to the head of the listint_t list.
 *
 * Return: Number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
