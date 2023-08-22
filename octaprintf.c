#include "main.h"

/**
 * print_octal - Print  unsigned octal
 * @list: Number to print
 * Esther Philani
 * Return: Length of the number
 **/
int print_octal(va_list list)
{
	char *p;
	int s;

	p = itoa(va_arg(list, unsigned int), 8);

	s = print((p != NULL) ? p : "NULL");

	return (s);
}
