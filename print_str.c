#include "main.h"

/**
 * print_str - prints a string to stdout
 *
 * @args_list: list of arguments containing the string to be printed
 *
 * Return: number of characters printed
 */

int print_str(va_list args_list)
{
	char *s = va_arg(args_list, char *);
	int n;

	if (s == NULL)
	{
		s = "(null)";
	}

	for (n = 0; s[n] != '\0'; n += 1)
	{
		_putchar(s[n]);
	}
	return (n);
}
