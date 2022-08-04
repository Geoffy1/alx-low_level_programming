#include "variadic_functions.h"

/**
 * print_all - prints everything it is given
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						str = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ap);
}
