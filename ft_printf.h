/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:58:51 by iben-che          #+#    #+#             */
/*   Updated: 2023/10/28 15:58:53 by iben-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# include "libft/libft.h"

# ifdef	__APPLE__
#  define OS "apple"
# else
#  define OS "unix"
# endif

int	ft_printf(const char *fmt, ...);

/*
** manage functions
*/

int	ft_manage_c(int fd, va_list ap, int count);
int	ft_manage_s(int fd, va_list ap, int count);
int	ft_manage_p(int fd, va_list ap, int count);
int	ft_manage_d(int fd, va_list ap, int count);
int	ft_manage_i(int fd, va_list ap, int count);
int	ft_manage_u(int fd, va_list ap, int count);
int	ft_manage_x_lc(int fd, va_list ap, int count);
int	ft_manage_x_uc(int fd, va_list ap, int count);
int	ft_manage_percent(int fd, va_list ap, int count);

/*
** print functions
*/

int	ft_putchar_fd_count(int fd, char c, int count);
int	ft_putstr_fd_count(int fd, char *str, int count);
int	ft_putaddr_fd_count(int fd, unsigned long int ptr, int count);
int	ft_putnbr_fd_count(int fd, int nb, int count);
int	ft_putnbr_unsigned_fd_count(int fd, unsigned int nb, int count);
int	ft_putnbr_base_fd_count_lc(int fd, unsigned long int nb, int base,
		int count);
int	ft_putnbr_base_fd_count_uc(int fd, unsigned long int nb, int base,
		int count);
int	ft_putpercent(int fd, char percent, int count);

#endif
