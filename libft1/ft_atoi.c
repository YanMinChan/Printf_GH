/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:04:32 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:04:32 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	ret;
	int					sign;

	ret = 0;
	sign = 1;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ret *= 10;
		ret += (sign) * (*str - '0');
		str++;
	}
	return (ret);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	const char str[] = " 	 		99999999999999999999999999basdfhnsd1293874";
	
	printf("ori:%d\n", atoi(str));
	printf("func:%d\n", ft_atoi(str));
}*/
