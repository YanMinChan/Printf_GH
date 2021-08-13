#include "includes/ft_printf.h"

typedef struct	s_width
{
	int	exist;
	int	value;
}

typedef struct	s_prec
{
	int	exist;
	int	value;
}

int	ft_is_spec(char *format)
{
	//store what spec it is to a struct
	int	is_spec;

	is_spec = 0;
	if (*format =='%')
	{
		is_spec = 1;
	}
}



int	ft_printf(const char *format, ...)
{
	int		i;
	va_list arg;

	i = 0;
	va_start(arg, format);
	while (format[i])
		while (format[i] != '%' && format[i])
		{
			write(1, &format[i++], 1);
		}
		ft_parse(format[i], i);
	}
	va_end(arg);
	return (0);
}
