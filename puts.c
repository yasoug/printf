#include "main.h"

/**
 * _puts - prints a given string with new line.
 * @str: the given string.
 * Return: count of characters printed.
 */

int _puts(char *str)
{
	int i = 0;

	for (; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
