#include "main.h"

/**
 * print_str - prints a string from a va_list.
 * @list: the va_list containing the string to be printed.
 * Return: count of characters printed.
 */

int print_str(va_list list)
{
	int i = 0;
	char *str;

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";

	for (; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
