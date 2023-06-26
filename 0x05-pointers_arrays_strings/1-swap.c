#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
/* the function that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
