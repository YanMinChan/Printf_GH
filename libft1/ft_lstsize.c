/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:07:37 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:07:37 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*t;

	t = (t_list *)malloc(sizeof(t_list) * 3);
	t->content = "heyy";
	t->next = 0;
	printf("%d\n", ft_lstsize(t));
}*/
