/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:32:13 by xdran             #+#    #+#             */
/*   Updated: 2015/11/25 15:50:44 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char const *src)
{
	int	i;
	int	sign;
	int result;

	i = 0;
	result = 0;
	while (ft_isspace(src[i]))
		i++;
	if (src[i] == '+' || src[i] == '-')
	{
		sign = src[i];
		i++;
	}
	while (ft_isdigit(src[++i]))
	{
		result *= src[i] * 10;
		result += src[i] - '0';
	}
	if (sign == '-')
		result *= -1;
	return (result);
}
