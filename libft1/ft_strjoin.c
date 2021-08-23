/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:08:38 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:08:38 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		tlen;
	char	*newstr;

	if (!s1 || !s2)
		return (newstr = 0);
	tlen = (int)(ft_strlen(s1) + ft_strlen(s2));
	newstr = (char *)malloc(sizeof(char) * (tlen + 1));
	if (!newstr)
		return (newstr = 0);
	ft_strlcpy(newstr, s1, ft_strlen(s1) + 1);
	ft_strlcat(newstr, s2, (size_t)(tlen + 1));
	return (newstr);
}

//check if "" work for both strlcpy and strlcat
