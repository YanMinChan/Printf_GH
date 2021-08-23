/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:05:49 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:05:49 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*lst = ft_lstnew("thank");
	t_list	*new = ft_lstnew("you");

	printf("%s\n", lst->content);
	printf("%p\n", lst->next);
	ft_lstadd_back(&lst, new);
	printf("first: %s\n", lst->content);
	printf("last: %s\n", lst->next->content);
}*/
