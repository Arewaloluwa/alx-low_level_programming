#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: pointer of array
 * @n: number of times to print
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf('\n');
}
