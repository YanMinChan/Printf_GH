/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:07:46 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:07:46 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p;

	i = 0;
	p = s;
	if (c > 255)
		c -= 256;
	while (i < n)
	{
		if (*p == c)
			return ((char *)p);
		p++;
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s[] = "What should I do";
	char	c = 'd';
	size_t	n = 13;

	printf("ori:%s\n", memchr(s, c, n));
	printf("func:%s\n", ft_memchr(s, c, n));
}*/
