#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocate and initialize memory for an array.
 * @nmemb: Number of elements to allocate space for.
 * @size: Size (in bytes) of each element.
 *
 * Return: A pointer to the allocated and initialized memory.
 * Returns NULL if nmemb or size is zero or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = (size_t)nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);
	return (ptr);
}
