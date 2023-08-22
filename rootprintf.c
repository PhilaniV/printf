#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: String to enconde
 *
 * Return: String encode
 */
int rot13(char *s)
{
	int z, x;
	char *normalz, *rot13z;

	normalz = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13z = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (z = 0; s[z] != '\0'; z++)
	{
		for (x = 0; normalz[x] != '\0'; x++)
		{
			if (s[z] == normalz[x])
			{
				_putchar(rot13z[x]);
				break;
			}
		}

		if (!normalz[x])
			_putchar(s[z]);
	}
	return (z);
}

/**
 * print_rot - Prints the rot13'ed string
 * @list: String to encoded
 *
 * Return: Length of the string encoded
 **/
int print_rot(va_list list)
{
	char *p;
	int p_len;

	p = va_arg(list, char *);
	p_len = rot13((p != NULL) ? p : "(ahyy)");

	return (p_len);
}
