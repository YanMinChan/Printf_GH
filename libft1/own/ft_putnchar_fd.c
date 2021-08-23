/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychan <ychan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:04:11 by ychan             #+#    #+#             */
/*   Updated: 2021/08/23 13:04:11 by ychan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putnchar_fd(char c, int n, int fd)
{
	int	ret;

	ret = 0;
	if (!c)
		return (0);
	while (ret < n)
	{
		write(fd, &c, 1);
		ret++;
	}
	return (ret);
}
