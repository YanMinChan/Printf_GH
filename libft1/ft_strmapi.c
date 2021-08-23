/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:08:52 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:08:52 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	if (!s || !f)
		return (newstr = 0);
	i = 0;
	newstr = ft_strdup(s);
	if (!newstr)
		return (newstr = 0);
	while (s[i])
	{
		newstr[i] = (*f)(i, (char)s[i]);
		i++;
	}
	return (newstr);
}
