/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:17:00 by ychan             #+#    #+#             */
/*   Updated: 2021/08/17 19:17:00 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_find(char *types, char input)
{
	while (*types)
	{
		if (*types == input)
			return (1);
		types++;
	}
	return (0);
}

static int	ft_parse_type(char type, t_flags *flags, va_list arg)
{
	int	ret;

	ret = 0;
	if (type == 'c')
		ret += ft_write_char(va_arg(arg, int), flags);
	else if (type == 's')
		ret += ft_write_str(va_arg(arg, char *), flags);
	else if (type == 'p')
		ret += ft_write_ptr(va_arg(arg, unsigned long long), flags);
	else if (type == 'd' || type == 'i')
		ret += ft_write_num(va_arg(arg, int), flags);
	else if (type == 'u')
		ret += ft_write_ui(va_arg(arg, unsigned int), flags);
	else if (type == 'x' || type == 'X')
		ret += ft_write_hex(va_arg(arg, int), flags, type);
	else if (type == '%')
		ret += write(1, "%", 1);
	return (ret);
}

static int	ft_parse_flag(const char *format, t_flags *flags)
{
	int	i;

	i = 0;
	while (format[i])
	{
		if (!ft_isdigit(format[i]) && !ft_find("-0.# +", format[i]))
			break ;
		else if (format[i] == '-')
			flags->minus = 1;
		else if (format[i] == '0')
			flags->zero = 1;
		else if (format[i] == '#')
			flags->hash = 1;
		else if (format[i] == ' ')
			flags->space = 1;
		else if (format[i] == '+')
			flags->plus = 1;
		if (ft_isdigit(format[i]))
			i += ft_parse_value(&format[i], flags, 'w') - 1;
		else if (format[i] == '.')
			i += ft_parse_value(&format[i + 1], flags, 'p');
		i++;
	}
	return (i);
}

int	ft_parse(const char *format, va_list arg)
{
	t_flags	flags;
	int		i;
	int		ret;

	i = 0;
	ret = 0;
	if (!*format)
		return (0);
	while (format[i])
	{
		flags = ft_flag_reset();
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			i += ft_parse_flag(&format[i], &flags);
			if (ft_find("cspdiuxX%", format[i]))
				ret += ft_parse_type((char)format[i], &flags, arg);
//			else if (format[i])
//				ret += write(1, &format[i], 1);
		}
		else if (format[i] != '%')
			ret += write(1, &format[i], 1);
		i++;
	}
	return (ret);
}
