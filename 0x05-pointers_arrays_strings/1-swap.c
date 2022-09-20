#include "main.h"
/**
 * swap_int - swap integers
 *
 * Return - SUCCESS
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;
	*a = c;
	*b = d;
}
