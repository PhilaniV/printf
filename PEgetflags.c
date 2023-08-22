#include "main.h"

/**
 * get_flags - Calculates active flags1
 * @format: Formatted string in which to print the arguments
 * @i: take a parameter.
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int t, curr_i;
	int flags1 = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (t = 0; FLAGS_CH[t] != '\0'; t++)
			if (format[curr_i] == FLAGS_CH[t])
			{
				flags1 |= FLAGS_ARR[t];
				break;
			}

		if (FLAGS_CH[t] == 0)
			break;
	}

	*i = curr_i - 1;

	return (flags1);
}
