#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rabbit, *goat;

	rabbit = goat = head;
	while (rabbit && goat && goat->next)
	{
		rabbit = rabbit->next;
		goat = goat->next->next;
		if (rabbit == goat)
		{
			rabbit = head;
			break;
		}
	}
	if (!rabbit || !goat || !goat->next)
		return (NULL);
	while (rabbit != goat)
	{
		rabbit = rabbit->next;
		goat = goat->next;
	}
	return (goat);
}
/*compiled by mufatech*/
