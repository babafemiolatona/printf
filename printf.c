#include "main.h"
/**
  * _printf - takes a format string and variable arguments
  * @format: string to be formatted
  * Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
	va_list args;
	int counter = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				counter += 1;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);

				while (*str != '\0')
				_putchar(*str++);
				counter += 1;
			}
			else if (*format == '%')
			{
				_putchar('%');
				counter += 1;
			}
		}
		else
		{
			_putchar(*format);
			counter += 1;
		}
		format += 1;
	}
	va_end(args);
	return (counter);
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
