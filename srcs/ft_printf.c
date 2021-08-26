/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 21:42:42 by ychan             #+#    #+#             */
/*   Updated: 2021/08/13 21:42:42 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

//handle width, presicion, main function
//handle '-', '0', ' ', '.', '+' flags

t_flags	ft_flag_reset(void)
{
	t_flags	flags;

	flags.width.exist = 0;
	flags.width.value = 0;
	flags.prec.exist = 0;
	flags.prec.value = 0;
	flags.minus = 0;
	flags.zero = 0;
	flags.hash = 0;
	flags.space = 0;
	flags.plus = 0;
	return (flags);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		ret;

	ret = 0;
	va_start(arg, format);
	ret = ft_parse(format, arg);
	va_end(arg);
	return (ret);
}

/*int	main(void)
{
	ft_printf("func: %.s \n", "-");
	printf("orig: %.s \n", "-");
}*/
