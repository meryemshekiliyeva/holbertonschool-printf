#include "main.h"
/**
 * print_string - Prints a string to the standard output
 * @ptr: Pointer to the string to be printed
 *
 * Return: The length of the string
 */
int print_string(char *ptr)
{
	int length = 0;

	if (ptr == (char *)0)
	{
		print_string("(null)");
		return (6);
	}

	while (ptr[length])
	{
		_putchar(ptr[length]);
		length++;
	}

	return (length);
}
