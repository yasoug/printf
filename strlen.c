#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: input string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	if (*s)
		return (_strlen(s + 1) + 1);
	return (0);
}
