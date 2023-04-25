#include "main.h"

/**
 * rev_str - reverses a given string in place
 *
 * @i: string to be reversed
 *
 * Return: pointer to the reversed string
 */

char *rev_str(char *i)
{
	int count, index;
	char pip;
	char *ret;

	for (count = 0; i[count] != '\0'; count++)
	{
		ret = malloc(sizeof(char) * count + 1);
	}
	if (ret == NULL)
	{
		return (NULL);
	}

	my_memcpy(ret, i, count);

	for (index = 0; index < count; index++, count--)
	{
		pip = ret[count - 1];
		ret[count - 1] = ret[index];
		ret[index] = pip;
	}
	return (ret);
}

/**
 * my_memcpy - copies a specified number of bytes
 * from one memory location to another
 *
 * @end: destination memory location to copy to
 * @start: source memory location to copy from
 * @n: number of bytes to be copied
 *
 * Return: pointer to the destination memory location
 */

char *my_memcpy(char *end, char *start, unsigned int n)
{
	char *dest_ptr = end;
	char *src_ptr = start;

	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}

	return (end);
}

/**
 * _rev - prints a string in reverse order
 *
 * @args_list: va_list containing a single argument
 *
 * Return: The length of the printed string if successful,
 * -1 otherwise
 */

int _rev(va_list args_list)
{
	int counter;
	char *_a;
	char *_b;

	_a = va_arg(args_list, char *);

	if (_a == NULL)
	{
		return (-1);
	}

	_b = rev_str(_a);

	if (_b == NULL)
	{
		return (-1);
	}

	for (counter = 0; _b[counter] != '\0'; counter++)
	{
		_putchar(_b[counter]);
	}

	free(_b);
	return (counter);
}
