#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the index of the first element if not true else 1 when false
 * @array: name array
 * @cmp: pointer to a function of 1 in main
 * Return: NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
