/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:17:07 by xdran             #+#    #+#             */
/*   Updated: 2015/11/27 14:26:04 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, void const *src, size_t len)
{
	char	*c_dest;
	char	*c_src;

	if (len == 0 || dest == src)
		return (dest);
	c_dest = (char *)dest;
	c_src = (char *)src;
	while (len--)
		*c_dest++ = *c_src++;
	return (dest);
}
