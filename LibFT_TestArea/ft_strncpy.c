/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:58:08 by xdran             #+#    #+#             */
/*   Updated: 2015/11/25 15:48:57 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char const *src, size_t n)
{
	unsigned	i;

	i = 0;
	while (src[++i] && i <= n)
		dest[i] = src[i];
	while (++i <= n)
		dest[i] = '\0';
	return (dest);
}
