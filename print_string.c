#include "main.h"
/**
 * print_string - print string
 * @count: num of chars printed
 * @args: arguments
 * Return: num of chars printed
 */
int print_string(va_list args, int count)
{
	int len = 0;
	int i;
	char *str = va_arg(args, char *);

	while (str != '\0')
	{
		if (*str < 32 || *str >= 127)
		{
			printf("\\x%02X", (unsigned char)*str);
			count += 4;
		}
		else
		{
			putchar(*str);
			count++;
		}
		str++;
	}
	return (count);
}
