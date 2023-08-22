#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *p;
	int p_lenom;

	p = va_arg(list, char*);
	p_lenom = print((p != NULL) ? p : "(null)");

	return (p_lenom);
}
