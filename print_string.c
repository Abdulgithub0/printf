#include "header.h"

/**
 * print_string - write string to stdou
 * @character: arg to be printed
 *
 * Return: void
 */

void print_string(va_list character)
{
	char *string = va_arg(character, char *);

	while (*string)
	{
		write(1, &(*string), 1);
		string++;
	}
}
