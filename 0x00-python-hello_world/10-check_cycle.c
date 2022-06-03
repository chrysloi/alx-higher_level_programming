#include "lists.h"
#include <stdio.h>
/**
 * check_cycle - checks if linked lists has a cycle
 * @list: linked list
 * Return: 1 for success, 0 if fail
 */

int check_cycle(listint_t *list)
{
	int i = 0;

	if (!list)
		return (0);
	while (list)
	{
		list = list->next;
		i++;
		if (i > 100)
			return (1);
	}
	return (0);
}
