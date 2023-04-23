#include "main.h"

/**
 * get_func - function that returns the needed function
 * @i: identifier for function
 * Return: Pointer to the needed function
 */

char* (*get_func(char i))(va_list)
{
	int k = 0;

	print keys[] = {
			{'c', print_c},
			{'s', print_s},
			{'\0', NULL}
		};

	while (keys[k].id != '\0')
	{
		if (keys[k].id == i)
			return (keys[k].func);
		k++;
	}
	return (NULL);
}

/**
 * _printf - function that produces output according to a format
 * @format: string + identifiers
 * Return: strings
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int len = 0;
	va_list list;
	char *buffer;
	char *str;
	char *(*f)(va_list);

	if (format == NULL)
		return (0);
	buffer = malloc(1024);
	if (buffer == NULL)
		return (0);

	va_start(list, format);
	while (format[i])
	{
		if (format[i] != '%')
			buffer[len++] = format[i++];
		else
		{
			if (format[++i] == '%')
				buffer[len++] = format[i++];
			else
			{
				f = get_func(format[i]);
				if (f == NULL)
					buffer[len++] = format[--i];
				else
				{
					str = f(list);
					while (*str)
						buffer[len++] = *str++;
				} i++;
			}
		}
	}
	buffer = realloc(buffer, _strlen(buffer));
	write(1, buffer, _strlen(buffer));
	va_end(list);
	return (_strlen(buffer));
}
