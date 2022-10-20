#include "lists.h"
/**
 * list_len - returns the num of element in a list.
 * @h: singly linked lists
 * Return: num of elements in the list
 */

size_t list _len(const list_l *h)
{
	size_t number_of_nodes;

	number_of_nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
