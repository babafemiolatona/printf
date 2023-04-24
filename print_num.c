#include "main.h"

/**
  * print_num - the function name
  * @args_list: parameter of type va_list .
  * Return: int .
 */
int print_num(va_list args_list)
{
	int _nin;
	int ops;
	int count;
	unsigned int num;

	_nin  = va_arg(args_list, int);
	ops = 1;
	count = 0;
	if (_nin < 0)
	{
		count += _putchar('-');
		num = (unsigned int)(-_nin);
	}
	else
	{
		num = (unsigned int)_nin;
	}
	while (num / ops > 9)
	ops *= 10;
	while (ops != 0)
	{
		int digit = num / ops;

		count += _putchar('0' + digit);
		num %= ops;
		ops /= 10;
	}
	return (count);
}

/**
  * unsigned_num - the function name
  * @n: parameter of type unsigned int .
  * Return: int .
 */
int unsigned_num(unsigned int n)
{
	unsigned int num;
	int ops;
	int count;

	ops = 1;
	count = 0;
	num = n;
	while (num / ops > 9)
	{
		ops *= 10;
	}
	while (ops != 0)
	{
		int digit = num / ops;

		count += _putchar('0' + digit);
		num %= ops;
		ops /= 10;
	}
	return (count);
}
