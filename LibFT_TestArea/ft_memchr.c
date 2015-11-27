/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:23:53 by xdran             #+#    #+#             */
/*   Updated: 2015/11/27 15:28:27 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void const *b, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i++ < len)
	{
		if (((unsigned char *)b)[i] == (unsigned char)c)
			return (b);
	}
	return (NULL);
}
