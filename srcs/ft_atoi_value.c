/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:19:14 by ychan             #+#    #+#             */
/*   Updated: 2021/08/17 19:19:14 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_atoi_value(const char *format, t_flags *flags)
{
	//turn char into int
	//store into t_flags values
	//return number of format read
	int	i;
	int	*value;

	i = 0;
	if (!ft_isdigit(format[i]))
		return (0);
	if (format[i - 1] == '.')
		value = &(flags->prec.value);
	else
		value = &(flags->width.value);
	while (ft_isdigit(format[i]))
	{
		*value *= 10;
		*value += (char)format[i] - '0';
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_flags flags;
	int i;
	char *s = ".123";
	flags = ft_flag_reset();
	i = ft_atoi_value(&s[1], &flags);
	printf("%d %d\n", flags.prec.value, i);
}*/