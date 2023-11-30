#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;

	list_t *N;

	while (str[len])
		len++;
	N = malloc(sizeof(list_t));

	if (!N)
		return (NULL);

	N->str = strdup(str);
	N->len = len;
	N->next = (*head);
	(*head) = N;

	return (*head);
}
