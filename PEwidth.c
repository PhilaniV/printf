#include "main.h"

/**
 * get_width - Calculates the width01 for printing
 * @format: Formatted string in which to print the arguments.
 * @i: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: width01.
 */
int get_width(const char *format, int *i, va_list list)
{
	int update;
	int width01 = 0;

	for (update = *i + 1; format[update] != '\0'; update++)
	{
		if (is_digit(format[update]))
		{
			width01 *= 10;
			width01 += format[update] - '0';
		}
		else if (format[update] == '*')
		{
			update++;
			width01 = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*i = update - 1;

	return (width01);
}
