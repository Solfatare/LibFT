/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_intvaltest.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:56:46 by xdran             #+#    #+#             */
/*   Updated: 2015/11/24 15:50:50 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define Hboundary 5000
#define Lboundary -5000

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int			main(void)
{
	int			i;

	i = Lboundary;
	while (++i < Hboundary)
	{
		if (ft_isalnum(i) != isalnum(i))
		{
			printf("ft_isalnum KO for : %d\n", i);
			printf("Original : %d\n", isalnum(i));
			printf("Copy : %d\n", ft_isalnum(i));
			break ;
		}
		if (i == Hboundary - 1)
			printf("ft_isalnum OK\n");
	}
	i = Lboundary;
	while (++i < Hboundary)
	{
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("ft_isalpha KO for : %d\n", i);
			printf("Original : %d\n", isalpha(i));
			printf("Copy : %d\n", ft_isalpha(i));
			break ;
		}
		if (i == Hboundary - 1)
			printf("ft_isalpha OK\n");
	}
	i = Lboundary;
	while (++i < Hboundary)
	{
		if (ft_isascii(i) != isascii(i))
		{
			printf("ft_isascii KO for : %d\n", i);
			printf("Original : %d\n", isascii(i));
			printf("Copy : %d\n", ft_isascii(i));
			break ;
		}
		if (i == Hboundary - 1)
			printf("ft_isascii OK\n");
	}
	i = Lboundary;
	while (++i < Hboundary)
	{
		if (ft_isdigit(i) != isdigit(i))
		{
			printf("ft_isdigit KO for : %d\n", i);
			printf("Original : %d\n", isdigit(i));
			printf("Copy : %d\n", ft_isdigit(i));
			break ;
		}
		if (i == Hboundary - 1)
			printf("ft_isdigit OK\n");
	}
	i = Lboundary;
	while (++i < Hboundary)
	{
		if (ft_isprint(i) != isprint(i))
		{
			printf("KO for : %d\n", i);
			printf("Original : %d\n", isprint(i));
			printf("Copy : %d\n", ft_isprint(i));
			break ;
		}
		if (i == Hboundary - 1)
			printf("ft_isprint OK\n");
	}
	i = Lboundary;
	while (++i < Hboundary)
	{
		if (ft_tolower(i) != tolower(i))
		{
			printf("KO for : %d\n", i);
			printf("Original : %d\n", tolower(i));
			printf("Copy : %d\n", ft_tolower(i));
			break ;
		}
		if (i == Hboundary - 1)
			printf("ft_tolower OK\n");
	}
	i = Lboundary;
	while (++i < Hboundary)
	{
		if (ft_toupper(i) != toupper(i))
		{
			printf("KO for : %d\n", i);
			printf("Original : %d\n", toupper(i));
			printf("Copy : %d\n", ft_toupper(i));
			break ;
		}
		if (i == Hboundary - 1)
			printf("ft_toupper OK\n");
	}
}
