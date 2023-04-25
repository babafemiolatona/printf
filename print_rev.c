#include "main.h"

/**
 * print_rev - prints a given string in reverse order
 *
 * @args_arr: variable argument list containing the string to be printed
 *
 * Return: number of characters printed
 */

int print_rev(va_list args_arr)
{
	int _c, _p = 0;
	char *pet = va_arg(args_arr, char*);

	if (pet == NULL)
	{
		pet = "(null)";
	}

	do {
		_p++;
	} while (pet[_p] != '\0');

	_c = (_p - 1);
	do {
		_putchar(pet[_c]);
		_c--;
	} while (_c >= 0);

	return (_p);
}
