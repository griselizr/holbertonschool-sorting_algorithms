#include "sort.h"
/**
 *insertion_sort_list - sorts a doble linked list in ascending
 *order with insertion
 *@list: nodes
 *Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now, *last;

	if (!list || !(*list))
		return;
	for (now = (*list)->next; now; now = now->next)
	{
	while (now->prev && now->prev->n > now->n)
	{
	last = now->prev;
	now->prev = last->prev;
	last->prev = now;
	last->next = now->next;
	now->next = last;
	if (now->prev)
		now->prev->next = now;
else
	*list = now;
	if (last->next)
		last->next->prev = last;
	print_list(*list);
		}
	}
}
