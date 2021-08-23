/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:09:09 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:09:09 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trimstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!ft_strchr(set, s1[i]))
			break ;
		i++;
	}
	return (i);
}

static int	ft_trimend(char const *s1, char const *set)
{
	int	j;

	j = (int)ft_strlen(s1);
	while (s1[j - 1])
	{
		if (!ft_strchr(set, s1[j - 1]))
			break ;
		j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		start;
	int		end;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	start = ft_trimstart(s1, set);
	end = ft_trimend(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (trim = 0);
	ft_strlcpy(trim, s1 + start, end - start + 1);
	return (trim);
}
