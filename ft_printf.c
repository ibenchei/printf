/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 20:08:27 by ibenchei          #+#    #+#             */
/*   Updated: 2021/10/17 20:23:12 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_get_occur(char *str_ref, char flag)
{
	return (ft_strchr(str_ref, flag) - str_ref);
}

int	ft_treat_fmt(const char *fmt, int fd, va_list ap,
		int (**ptr_arr)(int, va_list, int))
{
	int		count;
	int		i;
	char	*str_ref;

	count = 0;
	i = 0;
	str_ref = ft_strdup("cspdiuxX%");
	while (fmt[i])
	{
		if (fmt[i] == '%' && ft_strchr(str_ref, fmt[i + 1]))
		{
			count = ptr_arr[ft_get_occur(str_ref, fmt[i + 1])](fd, ap, count);
			i += 1;
		}
		else if (fmt[i] == '%' && !ft_strchr(str_ref, fmt[i + 1]))
			i += 1;
		else
			count = ft_putchar_fd_count(fd, fmt[i], count);
		i += 1;
	}
	free(str_ref);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	int		fd;
	va_list	ap;
	int		(**ptr_arr)(int, va_list, int);
	int		count;

	fd = 1;
	va_start(ap, fmt);
	ptr_arr = malloc(sizeof(void *) * 9);
	ptr_arr[0] = ft_manage_c;
	ptr_arr[1] = ft_manage_s;
	ptr_arr[2] = ft_manage_p;
	ptr_arr[3] = ft_manage_d;
	ptr_arr[4] = ft_manage_i;
	ptr_arr[5] = ft_manage_u;
	ptr_arr[6] = ft_manage_x_lc;
	ptr_arr[7] = ft_manage_x_uc;
	ptr_arr[8] = ft_manage_percent;
	count = ft_treat_fmt(fmt, fd, ap, ptr_arr);
	va_end(ap);
	free(ptr_arr);
	return (count);
}
