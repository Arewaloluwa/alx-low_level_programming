#include "main.h"
/**
 * @_strlen - gets character string
 *
 * @s: character to get string
 *
 * Return - SUCCESS
 *
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
