#include "shell.h"

/**
 * bfree - function that frees a pointer and NULLs the address
 * @ptr: address of the pointer
 * Return: 1 (Success) 0 (Failure)
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
