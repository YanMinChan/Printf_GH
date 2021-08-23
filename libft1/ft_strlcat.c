/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:08:41 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:08:41 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	j = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (*src == 0)
		return (src_len + dst_len);
	if (dstsize < dst_len + 1)
		return (src_len + dstsize);
	if (dstsize > dst_len + 1)
	{
		while ((dst_len + j) < dstsize && src[j] && dst)
			dst[i++] = src[j++];
		if ((dst_len + j) == dstsize)
			dst[--i] = '\0';
		else
			dst[i] = '\0';
	}
	return (src_len + dst_len);
}

/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dst[16] = "HELLO";
	char	src[] = "";
	size_t	n = 15;

	printf("%zu\n", strlcat(dst, src, n));
	printf("%s\n", dst);
}*/
