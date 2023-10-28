/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_functions_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:58:23 by iben-che          #+#    #+#             */
/*   Updated: 2023/10/28 15:58:26 by iben-che         ###   ########.fr       */
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
