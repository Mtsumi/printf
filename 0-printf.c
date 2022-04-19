#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf : writes output to stdout
 * handles c, s and % conversion specifiers
 * *format : a character string composed of zero or more directives
 * return -the number of characters printed
 * (excluding the null byte used to end the output to string)
 */
int _printf(const char *format, ...)
{
	int i;
	int x = strlen(format);
	va_list apt;
	va_start(apt, format);

	for (i = 0; i < x; i++)
	{
		if(format[i] == (%%c))
		{
			char y = va_arg(apt, char);
		_putchar(y);
		}
		else if(format[i] == (%%s))
		{
			char y = va_arg(apt, char);
			_putchar(y);
		}
		else(format[i] == (%%))
		{
			char y = va_arg(apt, char);
			 _putchar(y);
		}
	}
	va_end(apt);

}
		


