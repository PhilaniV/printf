#include "main.h"

/**
 * print_rev_string - Print a string in reverse
 * @list: List of arguments
 * PE
 * Return: Length of the string
 **/
int  print_rev_string(va_list list)
{
	int z, s;
	const char *strl;

	strl = va_arg(list, const char *);

	s = _strlen(strl);

	for (z = s - 1; z >= 0; z--)
		_putchar(strl[z]);

	return (s);
}
