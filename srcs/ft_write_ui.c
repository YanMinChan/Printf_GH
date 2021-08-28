/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_ui.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:12:11 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:12:11 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//no need to include ' ', '+' , '#' flags

static int	ft_print_ui(char *n2, t_flags *flags)
{
	int	ret;

	ret = 0;
	if (flags->minus)
	{
		ret += ft_putnchar_fd('0', flags->prec.value, 1);
		ret += ft_putstr_fd(n2, 1);
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
	}
	else if (!flags->minus)
	{
		if (flags->zero && !flags->prec.exist)
			ret += ft_putnchar_fd('0', flags->width.value, 1);
		else
			ret += ft_putnchar_fd(' ', flags->width.value, 1);
		ret += ft_putnchar_fd('0', flags->prec.value, 1);
		ret += ft_putstr_fd(n2, 1);
	}
	return (ret);
}

int	ft_write_ui(unsigned int n, t_flags *flags)
{
	int		ret;
	char	*n2;

	ret = 0;
	if (!flags->prec.value && n == 0 && flags->prec.exist)
		n2 = ft_strdup("");
	else
		n2 = ft_itoa_base(n, "0123456789");
	if (flags->prec.value >= (int)ft_strlen(n2))
		flags->prec.value = flags->prec.value - ft_strlen(n2);
	else if (flags->prec.value < (int)ft_strlen(n2))
		flags->prec.value = 0;
	flags->width.value = flags->width.value - flags->prec.value - ft_strlen(n2);
	ret += ft_print_ui(n2, flags);
	free(n2);
	return (ret);
}
