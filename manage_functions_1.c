/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_functions_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:58:36 by iben-che          #+#    #+#             */
/*   Updated: 2023/10/28 15:58:38 by iben-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_manage_c(int fd, va_list ap, int count)
{
	char	c;

	c = va_arg(ap, int);
	return (ft_putchar_fd_count(fd, c, count));
}

int	ft_manage_s(int fd, va_list ap, int count)
{
	char	*str;

	str = va_arg(ap, char *);
	return (ft_putstr_fd_count(fd, str, count));
}

int	ft_manage_p(int fd, va_list ap, int count)
{
	unsigned long int	nb;

	nb = va_arg(ap, unsigned long int);
	return (ft_putaddr_fd_count(fd, nb, count));
}

int	ft_manage_d(int fd, va_list ap, int count)
{
	int	nb;

	nb = va_arg(ap, int);
	return (ft_putnbr_fd_count(fd, nb, count));
}

int	ft_manage_i(int fd, va_list ap, int count)
{
	int	nb;

	nb = va_arg(ap, int);
	return (ft_putnbr_fd_count(fd, nb, count));
}
