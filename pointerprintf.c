#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * print_pointer - Print a number in hexadecimal format
 * @list: Number to print
 * PE
 * Return: Length of the number
 **/
int print_pointer(va_list list)
{
	char *p;
	int s;

	p = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(p, "0"))
		return (print("(nil)"));

	s = print("0x");

	if (!_strcmp(p, "-1"))
		s += print("ffffffffffffffff");
	else
		s += print(p);

	return (s);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * OdenyiMuchai Alias OM
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int iom;

	for (iom = 0; s1[iom] != '\0'; iom++)
	{
		if (s1[iom] != s2[iom])
			return (s1[iom] - s2[iom]);
	}

	return (0);
}
