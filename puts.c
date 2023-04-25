#include "main.h"

/**
 * _puts - prints a given string with new line.
 * @str: the given string.
 * Return: count of characters printed.
 */

int _puts(char *str)
{
	int len = 0;

	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
