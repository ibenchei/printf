/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:32:02 by iben-che          #+#    #+#             */
/*   Updated: 2023/06/01 14:33:57 by iben-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	tab = malloc(i * sizeof(char) + 1);
	if (!tab)
		return (NULL);
	while (j < i)
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}
