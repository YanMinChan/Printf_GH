/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:23:20 by ychan             #+#    #+#             */
/*   Updated: 2021/08/14 17:23:20 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//for %d, %i
//no need to include '#'

static int	ft_num_sign(int is_negative, t_flags *flags)
{
	if (!is_negative && !flags->plus)
		return (0);
	else if (is_negative)
		write(1, "-", 1);
	else if (!is_negative)
		write(1, "+", 1);
	return (1);
}

static int	ft_print_num(char *n2, t_flags *flags, int is_negative)
{
	int	ret;

	ret = 0;
	if (flags->minus)
	{
		ret += ft_num_sign(is_negative, flags);
		ret += ft_putnchar_fd('0', flags->prec.value, 1);
		ret += ft_putstr_fd(n2, 1);
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
	}
	else if (!flags->minus)
	{
		if (flags->zero && !flags->prec.exist)
		{
			ret += ft_num_sign(is_negative, flags);
			ret += ft_putnchar_fd('0', flags->width.value, 1);
		}
		else
		{
			ret += ft_putnchar_fd(' ', flags->width.value, 1);
			ret += ft_num_sign(is_negative, flags);
		}
		ret += ft_putnchar_fd('0', flags->prec.value, 1);
		ret += ft_putstr_fd(n2, 1);
	}
	return (ret);
}


int	ft_write_num(int n, t_flags *flags)
{
	int	ret;
	char	*n2;
	int	is_negative;

	ret = 0;
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n *= -1;
	}
	if (n == 0 && flags->prec.value == 0)
		n2 = ft_strdup("");
	else
		n2 = ft_itoa_base((long long)n, "0123456789");
	if (flags->prec.value >= (int)ft_strlen(n2))	
		flags->prec.value = flags->prec.value - ft_strlen(n2);
	else if (flags->prec.value < (int)ft_strlen(n2))
		flags->prec.value = 0;
	flags->width.value = flags->width.value - flags->prec.value - ft_strlen(n2);
	if (is_negative || flags->plus)
		flags->width.value = flags->width.value - 1;
	ret += ft_print_num(n2, flags, is_negative);
	free(n2);
	return (ret);
}