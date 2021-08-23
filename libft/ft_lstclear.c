/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:05:59 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:05:59 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!(*lst) || !del)
		return ;
	while (*lst)
	{
		ft_lstdelone(*lst, del);
		next = (*lst)->next;
		*lst = next;
	}
	*lst = 0;
}
