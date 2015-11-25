/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xdran <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/23 13:09:35 by xdran             #+#    #+#             */
/*   Updated: 2015/11/25 14:53:35 by xdran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <string.h>

/*
**		Char Tests
*/
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isspace(int c);
int			ft_islower(int c);
int			ft_isupper(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/*
**		Strings
*/
size_t		ft_strlen(char const *src);
char		*ft_strcpy(char *dest, char const *src);
char		*ft_strdup(char const *src);

/*
**		Writes
*/
void		ft_putchar(char c);
void		ft_putstr(char const *src);
void		ft_putendl(char const *src);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *src, int fd);
void		ft_putendl_fd(char const *src, int fd);
void		ft_putnbr_fd(int n, int fd);

/*
**		Numbers
*/
int			ft_atoi(char const *src);

/*
**		Maths
*/
size_t		ft_abs(int n);

#endif
