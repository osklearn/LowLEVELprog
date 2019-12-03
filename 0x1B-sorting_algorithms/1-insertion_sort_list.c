#include "sort.h"

/**
 * check - check the list
 *
 * @list: list of ints
 * @now: oral Variable
 * Return: void
 */

void check(listint_t *now, listint_t **list)
{
	while (now->prev != NULL)
	{
		if (now->n < now->prev->n)
		{
			now->prev->next = now->next;
			now->next->prev = now->prev;
			if (now->prev->prev == NULL)
			{
				*list = now;
				now->next = now->prev;
				now->prev = NULL;
			}
			else
			{
				now->prev = now->prev->prev;
				now->next = now->prev->next;
				now->prev->next = now;
			}
			now->next->prev = now;
			print_list(*list);
		}
		else
			now = now->prev;
	}
}

/**
 * insertion_sort_list - list of ints in ascending order using the Insertion
 * sort algorithm
 *
 * @list: list of ints
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now = NULL, *move = NULL, *head = NULL, *idx = NULL;

	if (list == NULL || *list == NULL)
		return;
	move = *list;
	idx = *list;
	now = *list;
	while (move != NULL)
	{
		head = *list;
		if (move == head)
			move = move->next;
		else if (move != NULL && move->n < move->prev->n)
		{
			now = move;
			move = move->next;
			now->next = idx;
			idx->next = move;
			now->prev = idx->prev;
			if (idx->prev)
				idx->prev->next = now;
			idx->prev = now;
			if (move)
				move->prev = idx;
			if (head == idx)
				*list = now;
			else if (head != now)
				*list = head;
			else
				*list = now;
			print_list(*list);
			check(now, list);
		}
		else
		{
			move = move->next;
			idx = idx->next;
		}
	}
}
