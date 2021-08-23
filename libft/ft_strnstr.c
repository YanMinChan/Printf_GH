/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:08:59 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:08:59 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	compare(const char *haystack, const char *needle, size_t n)
{
	size_t	j;
	size_t	len;

	j = 0;
	len = ft_strlen(needle);
	while (j < len)
	{
		if (haystack[j] != needle[j])
			return (0);
		if (j > n)
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		word_find;
	size_t	i;

	word_find = 0;
	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (*(haystack + i) && i < len)
	{
		if (*(haystack + i) == *needle)
			word_find = compare(haystack + i, needle, len - i - 1);
		if (word_find)
			return ((char *)(haystack + i));
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	haystack[] = "abcabcabcd";
	const char	needle[] = "cd";
	size_t	n = 9;

	printf("func:%s\n", ft_strnstr(haystack, needle, n));
	printf("ori:%s\n", strnstr(haystack, needle, n));
}*/
