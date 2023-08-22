#include "main.h"

/**
 * get_size - Calculates the size1 to cast the argument
 * @format: Formatted string in which to print the arguments
 * @i: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *format, int *i)
{
	int curr_t = *i + 1;
	int size1 = 0;

	if (format[curr_t] == 'l')
		size1 = S_LONG;
	else if (format[curr_t] == 'h')
		size1 = S_SHORT;

	if (size1 == 0)
		*i = curr_t - 1;
	else
		*i = curr_t;

	return (size1);
}
