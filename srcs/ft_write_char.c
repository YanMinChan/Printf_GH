#include "../includes/ft_printf.h"

int	ft_write_char(int a, t_flags *flags)
{
	int	ret;
	char	a_char;

	ret = 0;
	a_char = (char)a;
	flags->width.value = flags->width.value - 1;
	if (flags->minus)
	{
		ret += write(1, &a_char, 1);
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
	}
	else if (!flags->minus)
	{
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
		ret += write(1, &a_char, 1);
	}
	return (ret);
}