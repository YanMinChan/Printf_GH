/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:09:05 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:09:05 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_charcnt(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	j;
	int	cnt;

	cnt = 0;
	if (c > 255)
		c -= 256;
	j = ft_charcnt(s, c);
	while (*s)
	{
		if (*s == c)
		{
			cnt++;
			if (j == cnt)
				return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	else
		return (0);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "I don't know what's happening!";
	char c = 'P';

	printf("ori:%s func:%s\n", strrchr(str, c), ft_strrchr(str, c));
}*/
