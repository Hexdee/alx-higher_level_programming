#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: the list to check
 *
 * Return: 1 if there's a cycle, 0 otherwise
 */

int check_cycle(listint_t *list)
{
	listint_t *fast = NULL, *slow = NULL;

	if (!list)
		return (0);

	fast = list;
	slow = list;

	while (fast->next && fast->next->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (1);

	}

	return (0);
}

