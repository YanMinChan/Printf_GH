/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:09:17 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:09:17 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ori:%c func:%c\n", tolower('a'), ft_tolower('a'));
	printf("ori:%c func:%c\n", tolower('A'), ft_tolower('A'));	
	printf("ori:%c func:%c\n", tolower('.'), ft_tolower('.'));
	printf("ori:%c func:%c\n", tolower(100), ft_tolower(100));
}*/
