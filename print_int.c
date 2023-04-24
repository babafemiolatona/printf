#include "main.h"

/**
  * print_int - the function name
  * @args_list: parameter of type va_list .
  * Return: int .
 */
int print_int(va_list args_list)
{
	int len = print_num(args_list);

	return (len);
}

/**
  * unsigned_int - the function name
  * @args_list: parameter of type va_list .
  * Return: int .
 */
int unsigned_int(va_list args_list)
{
	unsigned int _i = va_arg(args_list, unsigned int);

	if (_i == 0)
	{
		return (unsigned_num(_i));
	}
	if (_i < 1)
	{
		return (-1);
	}
	return (unsigned_num(_i));
}
