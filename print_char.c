#include "main.h"

/**
 * print_char - prints a single character to stdout
 *
 * @ch: list of arguments containing the character to be printed
 *
 * Return: number of characters printed (always 1)
 */
int print_char(va_list ch)
{
	char ret;

	ret = va_arg(ch, int);
	_putchar(ret);
	return (1);
}
