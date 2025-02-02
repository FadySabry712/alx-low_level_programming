#include "search_algos.h"

/**
 * jump_search - function that searches for a value
 * @array: a pointer to the first element of the array
 * @size:  the number of elements in arr
 * @value: is the value to search
 * Return: the first index of value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, step, jump;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);

	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array [%ld] = [%d]\n", i, array[i]);
	printf("Value checked array [%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
