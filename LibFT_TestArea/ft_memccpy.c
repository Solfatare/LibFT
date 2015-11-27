/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:14:07 by xdran             #+#    #+#             */
/*   Updated: 2015/11/27 15:51:40 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, void const *src, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	unsigned char	x;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i++ < len)
	{
		if ((*tmp_dest++ = *tmp_src++) == x)
			return (tmp_dest);
	}
	return (NULL);
}
