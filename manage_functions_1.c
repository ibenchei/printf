/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_functions_1.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:09:05 by ibenchei          #+#    #+#             */
/*   Updated: 2021/10/17 20:09:07 by ibenchei         ###   ########.fr       */
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
