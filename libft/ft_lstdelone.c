/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:07:13 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:07:13 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	t_list	*l = ft_lstnew(malloc(20));

	ft_lstdelone(l, free);
	printf("content: %p\n", l->content);
	printf("next: %p\n", l->next);
}*/
