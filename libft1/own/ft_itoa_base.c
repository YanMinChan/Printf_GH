/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:03:50 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:03:50 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
