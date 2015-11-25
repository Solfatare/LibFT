/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 16:13:04 by xdran             #+#    #+#             */
/*   Updated: 2015/11/25 17:03:22 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(char const *src)
{
	unsigned i;

	if (!src)
		return (0);
	i = 0;
	while (src[i])
		i++;
	return (i);
}
