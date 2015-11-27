/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:30:03 by xdran             #+#    #+#             */
/*   Updated: 2015/11/27 15:42:14 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(void const *b1, void const *b2, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	unsigned int	i;

	if (!b1 && !b2 && !len)
		return (0);
	i = 0;
	ptr1 = (unsigned char *)b1;
	ptr2 = (unsigned char *)b2;
	while (i++ < len)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
	}
	return (0);
}
