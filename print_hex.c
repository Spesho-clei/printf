#include "main.h"
/**
 * printf_hex - function to print X specifier
 * @num: input
 * @count: num of chars to print
 * @uppercase_flag: determine whether uppercase or lowercase
 * Return: nothing
 */
void printf_hex(unsigned int num, int count, int uppercase_flag)
{
	char hex_digits[] = "0123456789abcdef";
	char buffer[10];
	int i = 0, j, k;

	do {
		buffer[i++] = hex_digits[num % 16];
		num /= 16;
	}
	while (num > 0)
	if (uppercase_flag)
	{
		for (j = i - 1, k = 0; j >= 0 && k < count; j--, k++)
		{
			if (buffer[j] >= 'a' && buffer[j] <= 'f')
			{
				putchar(buffer[j] - ('a' - 'A'));
			}
			else
			{
				putchar(buffer[j]);
			}
		}
	}
	else
	{
		for (j = i - 1, k = 0; j >= 0 && k < count; j--, k++)
		{
			putchar(buffer[j]);
		}
	}
}
