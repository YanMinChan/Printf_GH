/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:05:28 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:05:28 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ori:%d func:%d\n", isprint(0), ft_isprint(0));
	printf("ori:%d func:%d\n", isprint(10), ft_isprint(10));
	printf("ori:%d func:%d\n", isprint(32), ft_isprint(32));
	printf("ori:%d func:%d\n", isprint(60), ft_isprint(60));
	printf("ori:%d func:%d\n", isprint(127), ft_isprint(127));
	printf("ori:%d func:%d\n", isprint(150), ft_isprint(150));
}*/
