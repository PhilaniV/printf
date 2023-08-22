#include "main.h"

/**
 * print_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *p;
	int x;

	p = itoa(va_arg(list, unsigned int), 10);

	x = print((p != NULL) ? p : "NULL");

	return (x);
}
