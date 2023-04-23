#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * _printf - takes a format string and variable arguments
  *  and prints the formatted output to stdout
  *
  * @format: string to be formatted
  *
  * Return: the number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list args, int counter = 0, va_start(args, format);

	while (*format != '\0')
	{
		switch (*format)
		{
			case '%':
				format++;
		switch (*format)
			case 'c':
				char c = va_arg(args, int);

				_putchar(c);
				counter++;
				break;
			case 's':
				char *str = va_arg(args, char*);

				while (*str != '\0')
				{
					_putchar(*str);
					str++;
					counter++;
				}
				break;
			case '%':
				_putchar('%');
				counter++;
				break;
		break;
		default:
			_putchar(*format);
			counter++;
			break;
	}
	format++;
	}
	va_end(args);
	return (counter);
}
