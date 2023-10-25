/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_functions_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:09:17 by ibenchei          #+#    #+#             */
/*   Updated: 2021/10/17 20:09:18 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_manage_u(int fd, va_list ap, int count)
{
	unsigned int	nb;

	nb = va_arg(ap, unsigned int);
	return (ft_putnbr_unsigned_fd_count(fd, nb, count));
}

int	ft_manage_x_lc(int fd, va_list ap, int count)
{
	unsigned int	nb;

	nb = va_arg(ap, unsigned int);
	if (nb == 0)
		return (ft_putnbr_fd_count(fd, 0, count));
	return (ft_putnbr_base_fd_count_lc(fd, nb, 16, count));
}

int	ft_manage_x_uc(int fd, va_list ap, int count)
{
	unsigned int	nb;

	nb = va_arg(ap, unsigned int);
	if (nb == 0)
		return (ft_putnbr_fd_count(fd, 0, count));
	return (ft_putnbr_base_fd_count_uc(fd, nb, 16, count));
}

int	ft_manage_percent(int fd, va_list ap, int count)
{
	char	percent;

	percent = '%';
	(void)ap;
	return (ft_putpercent(fd, percent, count));
}
