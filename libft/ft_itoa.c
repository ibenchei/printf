/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:53:58 by iben-che          #+#    #+#             */
/*   Updated: 2023/08/06 16:42:13 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_size(long int n)
{
	int			size;
	long int	nbr;

	size = 0;
	if (n < 0)
		size++;
	nbr = (long int)n;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr / 10 > 0)
	{
		size++;
		nbr /= 10;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			size;
	char		*str;

	nb = (long int)n;
	size = ft_size(n) + 1;
	if (nb < 0)
		nb = -nb;
	str = ft_calloc(sizeof(char), size);
	if (!str)
		return (0);
	str[size - 1] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (nb > 0)
	{
		str[size - 2] = nb % 10 + '0';
		nb /= 10;
		size--;
	}
	return ((char *)str);
}
