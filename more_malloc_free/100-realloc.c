#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		new_ptr = malloc(new_size);

	if (new_ptr)
	{
		min_size = (old_size < new_size) ? old_size : new_size;
		memcpy(new_ptr, ptr, min_size);
		free(ptr);
	}
	return (new_ptr);
	}
}
