/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:23:27 by ychan             #+#    #+#             */
/*   Updated: 2021/08/14 17:23:27 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//for %p
// %p doesn't work with '0', '.', '#', ' ' and + flags

static int	ft_print_ptr(char *n2, t_flags *flags)
{
	int	ret;
	
	ret = 0;
	if (flags->minus)
	{
		ret += write(1, "0x", 2);
		ret += ft_putstr_fd(n2, 1);
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
	}
	else if (!flags->minus)
	{
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
		ret += write(1, "0x", 2);
		ret += ft_putstr_fd(n2, 1);
	}
	return (ret);
}

int	ft_write_ptr(unsigned long long n, t_flags *flags)
{
	int	ret;
	char	*n2;

	ret = 0;
	n2 = ft_itoa_base((long long)n, "0123456789abcdef");
	flags->width.value = flags->width.value - ft_strlen(n2) - 2;
	ret += ft_print_ptr(n2, flags);
	free(n2);
	return (ret);
}