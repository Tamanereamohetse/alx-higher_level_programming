#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_node- function to insert a num
 * @head: a pointer
 * @number: the number to insert
 * Return: the address of the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;

	if (node == NULL || node->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node && node->next && node->next->n <number)
		node = node->next;
	new->next = node->next;
	node->next = new;
	return(new);
}
