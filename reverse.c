#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @list: the arguments list passed to va_start()
 * Return: the number of characters printed to the stdout stream
 */

int print_rev(va_list list)
{
	char *str, buffer[50];
	int i;

	str = va_arg(list, char *);

	if (str == NULL)
		return (_puts("(null)"));

	for (i = 0; str[i]; i++)
		buffer[i] = str[i];

	buffer[i] = '\0';

	reverse_str(buffer);

	return (_puts(buffer));
}
