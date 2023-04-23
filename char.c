#include "main.h"
/**
 * print_c - returns char as string
 * @list: char
 * Return: String verion of char
 */
char *print_c(va_list list)
{
	char *s;

	s = malloc(sizeof(char) * 2);

	s[0] = va_arg(list, int);
	s[1] = '\0';

	return (s);
}
