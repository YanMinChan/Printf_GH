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

int	ft_parse_type(char type, t_flags *flags, va_list arg)
{
	int	ret;

	ret = 0;
	if (type == 'c')
		ret += ft_blabla;
	else if (type == 's')
		ret += ft_blabla;
	else if (type == 'p')
		ret += ft_blabla;
	else if (type == 'd' || type == 'i')
		ret += ft_blabla;
	else if (type == 'u')
		ret += ft_blabla;
	else if (type == 'x' || type == 'X')
		ret += ft_blabla;
	return (ret);
}