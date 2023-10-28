/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:57:56 by iben-che          #+#    #+#             */
/*   Updated: 2023/10/28 15:57:58 by iben-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned_fd_count(int fd, unsigned int nb, int count)
{
	if (nb >= 10)
		count = ft_putnbr_fd_count(fd, nb / 10, count);
	count = ft_putchar_fd_count(fd, nb % 10 + 48, count);
	return (count);
}

int	ft_putnbr_base_fd_count_lc(int fd, unsigned long int nb, int base,
		int count)
{
	char				*str;
	char				*str_ref;
	unsigned long int	copy_nb;
	int					i;

	str_ref = ft_strdup("0123456789abcdef");
	copy_nb = nb;
	i = 0;
	while (copy_nb > 0)
	{
		copy_nb /= base;
		i += 1;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (count);
	while (nb > 0)
	{
		str[copy_nb++] = str_ref[nb % base];
		nb /= base;
	}
	count = ft_putstr_fd_count(fd, ft_revstr(str), count);
	free(str);
	free(str_ref);
	return (count);
}

int	ft_putnbr_base_fd_count_uc(int fd, unsigned long int nb, int base,
		int count)
{
	char				*str;
	char				*str_ref;
	unsigned long int	copy_nb;
	int					i;

	str_ref = ft_strdup("0123456789ABCDEF");
	copy_nb = nb;
	i = 0;
	while (copy_nb > 0)
	{
		copy_nb /= base;
		i += 1;
	}
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (count);
	while (nb > 0)
	{
		str[copy_nb++] = str_ref[nb % base];
		nb /= base;
	}
	count = ft_putstr_fd_count(fd, ft_revstr(str), count);
	free(str);
	free(str_ref);
	return (count);
}

int	ft_putpercent(int fd, char percent, int count)
{
	count = ft_putchar_fd_count(fd, percent, count);
	return (count);
}
