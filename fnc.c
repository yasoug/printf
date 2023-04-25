#include "main.h"

/**
 * reverse_str - reverses a given string
 * @s: the string to be reversed
 */

void reverse_str(char s[])
{
	unsigned int i = 0, len = 0;
	char temp;

	len = _strlen(s);

	for (; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

/**
 * _itoa - Converts a long integer to a string
 *  @n: The long integer to convert
 *  @s: The character array to store the converted string in
 */

void _itoa(long n, char s[])
{
	long sign = n;
	unsigned int i = 0;

	if (sign < 0)
		n = -n;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse_str(s);
}

/**
 * to_base_n - convert a number to a base n
 * @num: the number to convert
 * @base: the base to convert to
 * @buffer: the character array that will hold the resulting string
 * Return: number of characters printed
 */

int to_base_n(unsigned long num, int base, char buffer[])
{
	int i = 0, rem;
	char hex_case = (buffer[0] == 'A') ? 'A' : 'a';

	(num == 0) && (buffer[i++] = '0');

	while (num > 0)
	{
		rem = num % base;

		if (rem < 10)
			buffer[i++] = rem + '0';
		else
			buffer[i++] = rem - 10 + hex_case;

		num /= base;
	}
	buffer[i] = '\0';
	reverse_str(buffer);
	return (_puts(buffer));
}

/**
 * _isdigit - checks for a digit
 * @c: the character to be checked
 *
 * Return: 1 if c is a digit, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}