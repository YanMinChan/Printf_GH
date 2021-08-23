/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:04:41 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:04:41 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < n)
		p[i++] = '\0';
}

/*#include <stdio.h>
#include <strings.h>

int	main(void)
{
	char	pass[] = "This is my password.";

	printf("%s\n", pass);
	bzero(pass + 4, 5);
//	ft_bzero(pass + 4, 5);
	printf("%s . . \n", pass + 8);
	printf("%s . . \n", pass + 9);
}*/
