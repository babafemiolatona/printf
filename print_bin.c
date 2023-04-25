#include "main.h"

/**
  * _bin - the function name
  * @args_list: parameter of type va_list .
  * Return: int .
 */
int _bin(va_list args_list)
{
	unsigned int teta = va_arg(args_list, unsigned int);
	int ret = 0;
	int k = 31;
	unsigned int pip;

	while (k >= 0)
	{
		pip = ((1 << k) & teta);
		switch (pip >> k)
		{
		case 0:
			if (ret > 0)
			{
				_putchar('0');
			}
			break;
		case 1:
			_putchar('1');
			ret++;
			break;
		default:
			break;
		}
		k--;
	}
	if (ret == 0)
	{
		ret++;
		_putchar('0');
	}
	return (ret);
}
