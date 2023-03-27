#include "main.h"
/**
 * switch_funct - returns the printed function
 * @s: formated string
 * @pos: index of conversion specifier
 * Return: function pointer
 */
int (*switch_funct(const char *s, int *pos))(va_list args, char *buf)
{
	print_t pnt[] = {{"c", print_char}, {"s", print_str},
		{"d", print_int}, {"i", print_int},
		{"b", print_bin}, {"u", print_unint},
		{"x", print_low_hex}, {"X", print_upp_hex},
		{"S", custom_str}, {"p", print_pointer},
<<<<<<< HEAD
		{"o", print_octal},{"#o", print_octal_zero},
=======
		{"o", print_octal},{"i", print_space_int},
		{"+d", print_plus_int},{" d", print_space_int},
		{"+i", print_plus_int},{" +d", print_plus_int},
		{" +i", print_plus_int},{"i", print_plus_int},
		{"#d", print_hash_int}, {"#i", print_hash_int},
>>>>>>> c5967e87dea5a056f2a3616ce1c2ec6c5c4ee1aa
		{NULL, NULL}};

	int i, j, k = 0;
	(*pos)++;
	j = *pos;

	for (i = 0; pnt[i].conv_spec != NULL; i++)
	{
		if (s[*pos] == pnt[i].conv_spec[k])
		{
			if (pnt[i].conv_spec[1] == '\0')
				return (pnt[i].f);

			while (s[*pos] == pnt[i].conv_spec[k])
				(*pos)++;
			k++;
			if (s[*pos] == pnt[i].conv_spec[k])
			{
				if (pnt[i].conv_spec[k + 1] == '\0')
					return (pnt[i].f);
				(*pos)++;
				if (s[*pos] == pnt[i].conv_spec[++k])
					return (pnt[i].f);
			}
			*pos = j;
			k = 0;
		}
	}
	return (NULL);
}