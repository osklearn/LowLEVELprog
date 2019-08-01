#include "lists.h"
#include <stdio.h>
/**
* print_list - Function that prints all the elemets of a list_t list
*@h: receive the list to print
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		counter++;
	}
	return (counter);
}
