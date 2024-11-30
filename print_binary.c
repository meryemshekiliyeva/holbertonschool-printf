#include "main.h"

/**
 * print_binary - Converts an unsigned int to binary and prints it
 * @n: The unsigned int to convert
 * Return: The number of characters printed
 */
int print_binary(unsigned int n)
{
    int count = 0;
    if (n / 2)
        count += print_binary(n / 2);
    count += write(1, &"01"[n % 2], 1);
    return count;
}
