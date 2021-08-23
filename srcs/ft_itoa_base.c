/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 18:48:26 by ychan             #+#    #+#             */
/*   Updated: 2021/08/18 18:48:26 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

//turn int to str of different base
//ret str
//currently done
//separated to ft_nbrlen and ft_itoa_base in helper dir

int	ft_nbrlen(long long n, long long baselen)
{
	int	nbrlen;

	nbrlen = 1;
	while (n / (int)baselen != 0)
	{
		n /= (int)baselen;
		nbrlen++;
	}
	return (nbrlen);
}

char	*ft_itoa_base(long long n, char *base)
{
	long long		baselen;
	char			*n2;
	int				nbrlen;

	baselen = (long long)ft_strlen(base);
	nbrlen = ft_nbrlen(n, baselen);
	n2 = (char *)malloc(sizeof(char) * nbrlen + 1);
	if (!n2)
		return (n2 = 0);
	n2[nbrlen] = '\0';
	while (--nbrlen >= 0)
	{
		n2[nbrlen] = base[n % baselen];
		n = n / baselen;
	}
	return (n2);
}

/*int	main(void)
{
	printf("%s\n", ft_itoa_base(151, "0123456789abcdef"));
	printf("%s\n", ft_itoa_base(4294967295, "0123456789abcdef"));
	printf("%s\n", ft_itoa_base(4294967295, "0123456789"));
	printf("%s\n", ft_itoa_base(2147483648, "0123456789"));
	printf("%s\n", ft_itoa_base(120, "0123456789"));
	printf("%s\n", ft_itoa_base(0, "0123456789"));
}*/