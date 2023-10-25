/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:24:15 by ibenchei          #+#    #+#             */
/*   Updated: 2023/08/04 17:59:20 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (f != NULL && s != NULL)
	{
		j = ft_strlen(s);
		while (i < j)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
