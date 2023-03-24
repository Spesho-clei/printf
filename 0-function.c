#include "main.h"
/**
 * _printf - function that produces output according to a format
 *
 * @format: character string
 * Return: total number of characters printed
 */
int _printf(const char *format, ...)
{
	int res;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				count += write(1, "%", 1);
				format++;
				continue;
			}
			res = handle_conversion_specifiers(&args, *format);
			if (res == -1)
				return (-1);
			count += res;
			format++;
		}
		else
		{
			count += write(1, format, 1);
			format++;
		}
	}
	va_end(args);
	return (count);
}
