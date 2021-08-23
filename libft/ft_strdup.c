/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:08:31 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:08:31 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = (char *)malloc(sizeof(*dup) * (ft_strlen(s1) + 1));
	if (!dup)
		return (0);
	while (s1[i])
	{
		dup[i] = (char)s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "Hello eh";
	char	*s2 = ft_strdup(s1);

	printf("%s %p\n", s1, s1);
	printf("%s %p\n", s2, s2);
}*/	
