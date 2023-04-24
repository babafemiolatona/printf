#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * struct convert - format specifier struct
 * @spec: the format specifier string
 * @f: a pointer to the function that handles the specifier
 */

typedef struct convert
{
	char *spec;
	int (*f)();
} conv;


int _printf(const char *format, ...);
int format_string(const char *format, conv func_list[], va_list list);
int print_str(va_list);
int print_char(va_list);
int print_perc(va_list);
int _putchar(char c);

#endif
