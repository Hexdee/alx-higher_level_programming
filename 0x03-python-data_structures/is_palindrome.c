#include "lists.h"

int is_palindrome(listint_t **head)
{
	//Get middle of the list
	//
	//Reverse second half
	//
	//Compare
	listint_t *fast = *head;
	listint_t *slow = *head;
	listint_t *middle = NULL;

	while (fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;
	}
	if (fast)
		middle = slow->next;
}
