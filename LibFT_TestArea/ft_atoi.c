/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:32:13 by xdran             #+#    #+#             */
/*   Updated: 2015/11/24 15:58:33 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *src)
{
	int	i;
	int	sign;
	int result;

	i = 0;
	while (ft_isspace(src[i]))
		i++;
	if (src[i] == '+' || src[i] == '-')
	{
		i++;
		sign = src[i];
	}
	while (ft_isdigit(src[++i]))
	{
		result *= 10;
		result += src[i] - '0';
	}
	if (sign == '-')
		result *= -1;
	return (result);
}
