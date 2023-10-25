/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:56:56 by iben-che          #+#    #+#             */
/*   Updated: 2023/06/01 14:57:00 by iben-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	char		*tmp;

	i = 0;
	tmp = (char *)s;
	while (tmp[i])
		i++;
	while (i >= 0)
	{
		if (tmp[i] == (char)c)
			return (&tmp[i]);
		i--;
	}
	return (0);
}
