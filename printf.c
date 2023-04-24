#include "main.h"

/**
 * format_string - receives a format string and a list of conversion functions
 * and arguments, and prints the formatted string
 *
 * @format: null-terminated string containing the characters to be printed
 * @func_list: array of conv structs that map format specifiers
 * to conversion functions
 * @list: va_list of arguments to be printed
 * Return: total number of characters printed
 */

int format_string(const char *format, conv func_list[], va_list list)
{
	int _a, _b, res, res_chars;

	res_chars = 0;
	for (_a = 0; format[_a] != '\0'; _a += 1)
	{
		if (format[_a] == '%')
		{
			for (_b = 0; func_list[_b].spec != NULL; _b += 1)
			{
				if (format[_a + 1] == func_list[_b].spec[0])
				{
					res = func_list[_b].f(list);
					if (res == -1)
						return (-1);
					res_chars += res;
					break;
				}
			}
			if (func_list[_b].spec == NULL && format[_a + 1] != ' ')
			{
				if (format[_a + 1] != '\0')
				{
					_putchar(format[_a]);
					_putchar(format[_a + 1]);
					res_chars += 2;
				}
				else
					return (-1);
			}
			_a += 1;
		}
		else
		{
			_putchar(format[_a]);
			res_chars += 1;
		}
	}
	return (res_chars);
}

#include "main.h"

/**
 * _printf - prints formatted output to the standard output stream
 * @format: a string of characters and format specifiers
 *
 * Return: the number of characters printed (excluding the null byte)
 */

int _printf(const char *format, ...)
{
	int num;

	conv func_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_perc},
		{"d", print_int},
		{"u", unsigned_int},
		{"i", print_int},
		{NULL, NULL}
	};
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(list, format);
	num = format_string(format, func_list, list);
	va_end(list);
	return (num);
}

#include "main.h"

/**
 * _putchar - function to print char
 * @c: char being passed
 * Return: returning char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
