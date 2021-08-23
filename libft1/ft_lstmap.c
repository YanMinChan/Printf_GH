/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:07:29 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:07:29 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*store;

	if (!lst || !f)
		return (0);
	nlst = 0;
	while (lst)
	{
		store = ft_lstnew((*f)(lst->content));
		if (!store)
		{
			ft_lstclear(&nlst, del);
			return (0);
		}
		ft_lstadd_back(&nlst, store);
		lst = lst->next;
	}
	return (nlst);
}
