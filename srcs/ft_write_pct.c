#include "../includes/ft_printf.h"

int	ft_write_pct(t_flags *flags)
{
	int		ret;

	ret = 0;
	flags->width.value = flags->width.value - 1;
	if (flags->minus)
	{
		ret += write(1, "%", 1);
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
	}
	else if (!flags->minus)
	{
		if (flags->zero)
			ret += ft_putnchar_fd('0', flags->width.value, 1);
		else
			ret += ft_putnchar_fd(' ', flags->width.value, 1);
		ret += write(1, "%", 1);
	}
	return (ret);
}
