/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iben-che <iben-che@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:22:43 by iben-che          #+#    #+#             */
/*   Updated: 2023/10/28 16:01:08 by iben-che         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	if ((count == 0 && size << 0) || (size == 0 && count << 0))
	{
		ptr = malloc(size * count);
		return (ptr);
	}
	if (size > sizeof(char) * 2147483424 || count > sizeof(char) * 2147483424)
		return (NULL);
	ptr = (malloc(size * count));
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
