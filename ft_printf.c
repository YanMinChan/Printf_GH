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

#include "includes/ft_printf.h"
#include <stdio.h>

//handle width, presicion, main function
//handle '-', '0', ' ', '.', '+' flags

t_flags	ft_flag_reset(void)
{
	//reset flags info
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

int	ft_parse_flag(const char *format, t_flags *flags)
{
	//store flag details to t_flags
	int	i;

	i = -1;
	while (format[i])
	{
		if (!ft_isdigit(format[i + 1]) && !ft_strchr("-0.# +", format[i + 1]))
			break ;
		else if (format[++i] == '-')
			flags->minus = 1;
		else if (format[++i] == '0')
			flags->zero = 1;
		else if (format[++i] == '#')
			flags->hash = 1;
		else if (format[++i] == ' ')
			flags->space = 1;
		else if (format[++i] == '+')
			flags->plus = 1;
		if (ft_isdigit(format[++i]))
		{
			flags->width.exist = 1;
			i += ft_atoi_value(format[i], flags);
		}
		else if (format[++i] == '.')
		{
			flags->prec.exist = 1;
			i += ft_atoi_value(format[++i], flags);
		}
		//start to save flag data in struct
		//no need to take care of type data
		//take into consideration of what flag will overlap another
		//flags info in test.c
	}

	return (i);
}

int	ft_parse(const char *format, va_list arg)
{
	t_flags	flags;
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	if (!*format)
		return (0);
	while (format[i])
	{
		flags = ft_flag_reset();
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			i += ft_parse_flag(&format[i], &flags);
			if (ft_strchr("cspdiuxX", format[i]))
			{
				//go to function for va_arg and differentiate type
				//should return character outputed
				ret += ft_parse_type((char)format[i], &flags, arg);
			}
			else if (format[i])
			{
				//take care of double % case
				ret += write(1, &format[i], 1);
			}
		}
		else if (format[i] != '%')
			ret += write(1, &format[i], 1);
		i++;
	}
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list arg;
	int		rtn;

	rtn = 0;
	va_start(arg, format);
	rtn = ft_parse(format, arg);
	va_end(arg);
	return (rtn);
}

int	main(void)
{
	ft_printf("HELLO\n", "hmm");
}