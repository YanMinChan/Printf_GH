/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:03:59 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:03:59 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_nbrlen(unsigned long long n, unsigned long long baselen)
{
	int	nbrlen;

	nbrlen = 1;
	while (n / baselen != 0)
	{
		n /= baselen;
		nbrlen++;
	}
	return (nbrlen);
}
