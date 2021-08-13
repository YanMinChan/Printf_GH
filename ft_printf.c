#include "includes/ft_printf.h"
#include <stdio.h>

typedef struct	s_width
{
	int	exist;
	int	value;
}				t_width;

typedef struct	s_prec
{
	int	exist;
	int	value;
}				t_prec;

typedef struct	s_flag
{
	t_width	width;
	t_prec	prec;
}
/*int	ft_is_flag(const char *format, int i)
{
	//store flag details to struct

	if (format[i] == '-')

}*/

int	ft_parse(const char *format, int i)
{
	if (!*format)
		return (0);
	while (format[++i])
	{
		if (ft_is_flag

	}
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list arg;

	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
			write(1, &format[i++], 1);
		while (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, '%', 1);
			i = i + 2;
		}
	ft_parse(&format[i], i);
	}
	va_end(arg);
	return (0);
}

int	main(void)
{
	ft_printf("HELLO\n", "hmm");
}