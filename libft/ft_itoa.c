/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:05:33 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:05:33 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_abs(long int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

static int	ft_mem(long int n)
{
	int	mem;

	mem = 0;
	if (n <= 0)
		mem++;
	while (n != 0)
	{
		n = n / 10;
		mem++;
	}
	return (mem);
}

char	*ft_itoa(int n)
{
	int		mem;
	int		is_negative;
	char	*c;

	mem = ft_mem(n);
	is_negative = 0;
	c = (char *)malloc(sizeof(char) * mem + 1);
	if (!c)
		return (c = 0);
	if (n < 0)
		is_negative = 1;
	c[mem] = '\0';
	while (--mem >= 0)
	{
		c[mem] = ft_abs(n % 10) + '0';
		n = ft_abs(n / 10);
	}
	if (is_negative)
		c[0] = '-';
	return (c);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(-623));
	printf("%s\n", ft_itoa(156));
	printf("%s\n", ft_itoa(-0));
}*/
