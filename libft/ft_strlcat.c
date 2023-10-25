/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:37:53 by iben-che          #+#    #+#             */
/*   Updated: 2023/08/13 09:19:19 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	int		i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!src || !dst)
		return (0);
	if (size <= 0)
		return (src_len);
	if (dst_len < size - 1)
	{
		i = 0;
		while (src[i] != '\0' && (i + dst_len < size - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
	}
	if (size < dst_len)
		return (size + src_len);
	return ((dst_len + src_len));
}
