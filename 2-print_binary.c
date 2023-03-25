#include "main.h"
/**
 * custom_printf - function to handle b conversion specifier
 *
 * @format: string
 * Return: num of printed chars
 */
int custom_printf(const char *format, ...)
{
	int num_chars_printed = 0;
	const char *ptr = format;
	va_list args;

	va_start(args, format);
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			++ptr;
			if (*ptr == 'b')
			{
				unsigned int arg = va_arg(args, unsigned int);

				if (arg > 1)
				{
					custom_printf("%b", arg / 2);
				}
				putchar(arg % 2 ? '1' : '0');
				num_chars_printed += sizeof(unsigned int) * 8;
			}
			else
			{
				putchar('%');
				putchar(*ptr);
				num_chars_printed += 2;
			}
		}
			else
			{
				putchar(*ptr);
				++num_chars_printed;
			}
			++ptr;
	}
		va_end(args);
		return (num_chars_printed);
}
