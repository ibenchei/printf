/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:09:26 by ibenchei          #+#    #+#             */
/*   Updated: 2021/10/17 20:09:28 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_fd_count(int fd, char c, int count)
{
	count += write(fd, &c, 1);
	return (count);
}

int	ft_putstr_fd_count(int fd, char *str, int count)
{
	if (!str)
		return (ft_putstr_fd_count(fd, "(null)", count));
	if (fd < 0)
		return (count);
	count += write(fd, str, ft_strlen(str));
	return (count);
}

int	ft_putaddr_fd_count(int fd, unsigned long int ptr, int count)
{
	if (ptr == 0 && OS[0] == 'u')
		return (ft_putstr_fd_count(fd, "(nil)", count));
	if (ptr == 0 && OS[0] == 'a')
		return (ft_putstr_fd_count(fd, "0x0", count));
	count = ft_putstr_fd_count(fd, "0x", count);
	count = ft_putnbr_base_fd_count_lc(fd, ptr, 16, count);
	return (count);
}

int	ft_putnbr_fd_count(int fd, int nb, int count)
{
	unsigned int	copy_nb;

	if (nb < 0)
	{
		count += write(fd, "-", 1);
		nb = -nb;
	}
	copy_nb = nb;
	if (copy_nb >= 10)
		count = ft_putnbr_fd_count(fd, copy_nb / 10, count);
	count = ft_putchar_fd_count(fd, copy_nb % 10 + 48, count);
	return (count);
}
