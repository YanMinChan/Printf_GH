/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:07:33 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:07:33 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*arr;

	arr = (t_list *)malloc(sizeof(t_list));
	if (!arr)
		return (arr = 0);
	arr->content = content;
	arr->next = 0;
	return (arr);
}

/*#include <stdio.h>

int	main(void)
{
	t_list	*l = ft_lstnew("c");

	printf("%s\n", l->content);
	printf("%p\n", l->next);
	printf("%lu\n", sizeof(t_list));
}*/
