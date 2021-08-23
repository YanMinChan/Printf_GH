/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:08:27 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:08:27 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	if (c > 255)
		c -= 256;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
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
	char str[] = "Eyy thanks for the evaluation";
	char c = '\0';

	printf("ori:%s func:%s\n", strchr(str, c), ft_strchr(str, c));
}*/
