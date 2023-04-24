#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	char first;
	char *second;

	first = 'A';
	second = "book";

	first = _printf("%c, %s\n", first, second);
	return (0);
}
