#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

char* (*get_func(char i))(va_list);
int _strlen(char *s);
int _printf(const char *format, ...);
char *print_s(va_list list);
char *print_c(va_list list);


/**
 * struct types - struct type
 * @id: data type to print
 * @func: pointer to functions according to identifier
 */

typedef struct types
{
	char id;
	char* (*func)(va_list);
} print;


#endif
