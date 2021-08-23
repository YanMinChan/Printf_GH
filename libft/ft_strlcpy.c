/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:08:45 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:08:45 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (!src || !dst)
		return (0);
	if (!dstsize)
		return (src_len);
	while (i < (dstsize - 1) && src[i] && dst)
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "HELLO";
	char	dest[0];
	unsigned int	size = 5;

	printf("%p\n", dest);
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	printf("%p\n", dest);
}*/
