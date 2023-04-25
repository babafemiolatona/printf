#include "main.h"

/**
 * _bin - converts number to binary(base 2)
 *
 * @args_list: va_list of arguments
 *
 * Return: number of characters printed
 */

int _bin(va_list args_list)
{
	int *ptr;
	int teta = 0;
	unsigned int _nin = va_arg(args_list, unsigned int);
	unsigned int res = _nin;
	int pip;

	do {
		_nin /= 2, teta++;
	} while (_nin / 2 != 0);
	teta++;

	ptr = malloc(teta * sizeof(int));

	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}

	pip = 0;
	do {
		ptr[pip] = res % 2, res /= 2, pip++;
	} while (pip < teta);

	pip = teta - 1;
	do {
		_putchar(ptr[pip] + '0'), pip--;
	} while (pip >= 0);

	free(ptr);
	return (teta);
}
