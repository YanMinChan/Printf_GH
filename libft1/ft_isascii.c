/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:05:16 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:05:16 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	printf("ori:%d func:%d\n", isascii(4), ft_isascii(4));
	printf("ori:%d func:%d\n", isascii(-3), ft_isascii(-3));
	printf("ori:%d func:%d\n", isascii(0), ft_isascii(0));
	printf("ori:%d func:%d\n", isascii(97), ft_isascii(97));
	printf("ori:%d func:%d\n", isascii(127), ft_isascii(127));
	printf("ori:%d func:%d\n", isascii(150), ft_isascii(150));	
}*/
