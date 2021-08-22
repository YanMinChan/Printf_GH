/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 17:23:33 by ychan             #+#    #+#             */
/*   Updated: 2021/08/14 17:23:33 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//for %s

int	ft_write_str(char *str, t_flags *flags)
{
	int	ret;
	
	ret = 0;
	if (flags->prec.value < (int)ft_strlen(str))
		flags->width.value = flags->width.value - flags->prec.value;
	else
		flags->width.value = flags->width.value - ft_strlen(str);
	if (flags->minus)
	{
		ret += ft_putnstr_fd(str, flags->prec.value, 1);
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
	}
	else if (!flags->minus)
	{
		ret += ft_putnchar_fd(' ', flags->width.value, 1);
		ret += ft_putnstr_fd(str, flags->prec.value, 1);
	}
	return (ret);
}