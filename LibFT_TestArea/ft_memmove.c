/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:29:09 by xdran             #+#    #+#             */
/*   Updated: 2015/11/27 15:57:41 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, void const *src, size_t len)
{
	unsigned char	*str;

	if (!dest || !src)
		return (NULL);
	str = (unsigned char *)malloc(sizeof(*str) * len);
	if (!str)
		return (NULL);
	ft_memcpy(str, src, len);
	ft_memcpy(dest, str, len);
	free(str);
	return (dest);
}
