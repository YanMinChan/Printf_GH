/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:23:11 by ychan             #+#    #+#             */
/*   Updated: 2021/08/14 17:23:11 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>
//for %x & %X
//include '#' flag
//return num of char write
//' ' and '+' cannot be used with %x and %X
//negative values taken care ft_write_hex first if statement

static int	ft_hex_prefix(char type, t_flags *flags)
{
	if (!flags->hash)
		return (0);
	if (type == 'x')
		write(1, "0x", 2);
	else if (type == 'X')
		write(1, "0X", 2);
	return (2);
}

static int	ft_print_hex(char *n2, t_flags *flags, char type)
{
	int	ret;

	ret = 0;
	if (flags->minus)
	{
		ret += ft_hex_prefix(type, flags);
		ret += ft_putnchar_fd('0', flags->prec.value, 1);
		ret += ft_putstr_fd(n2, 1);
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
	}
	else if (!flags->minus)
	{
		if (flags->zero && !flags->prec.exist)
		{
			ret += ft_hex_prefix(type, flags);
			ret += ft_putnchar_fd('0', flags->width.value, 1);
		}
		else
		{
			ret += ft_putnchar_fd(' ', flags->width.value, 1);
			ret += ft_hex_prefix(type, flags);
		}
		ret += ft_putnchar_fd('0', flags->prec.value, 1);
		ret += ft_putstr_fd(n2, 1);
	}
}

int	ft_write_hex(long long n, t_flags *flags, char type)
{
	int		ret;
	char	*n2;

	ret = 0;
	if (n < 0)
		n = 4294967295 + n + 1;
	if (n == 0)
		flags->hash = 0;
	if (type == 'x')
		n2 = ft_itoa_base(n, "0123456789abcdef");
	else
		n2 = ft_itoa_base(n, "0123456789ABCDEF");
	if (flags->prec.value > ft_strlen(n2))
		flags->prec.value = flags->prec.value - ft_strlen(n2);
	flags->width.value = flags->width.value - flags->prec.value - ft_strlen(n2)
	- (flags->hash * 2);
//	printf("width:%d prec: %d\n", flags->width.value, flags->prec.value);
	ret += ft_print_hex(n2, flags, type);
	free(n2);
	return (ret);
}