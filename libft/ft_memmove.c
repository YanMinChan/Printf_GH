/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:07:59 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:07:59 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*p1;
	const char	*p2;

	i = 0;
	p1 = dst;
	p2 = src;
	if (!dst && !src)
		return (0);
	while (i < len)
	{
		if (p1 > p2)
		{
			p1[len - 1] = p2[len - 1];
			len--;
		}
		else
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dst[] = "Piscine";
	char	src[] = "Core programme";
	size_t	n = 5;

	printf("ori:%s\n", memmove(dst, src, n));
	printf("func:%s\n", ft_memmove(dst, src, n));
}*/
