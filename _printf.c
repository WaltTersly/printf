#include "main.h"
/**
 * _printf - receives the main string and all needed parameters to
 * a formated string
 * @format: a string containing all the needed characters
 * Return: total count of the characters printed
 */
int _printf(const char *format, ...)
{
	int printed_chars;

	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
	};
	va_list arg_list;
	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
