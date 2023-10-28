/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenchei <ibenchei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 01:34:13 by ibenchei          #+#    #+#             */
/*   Updated: 2021/10/15 01:34:15 by ibenchei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_revstr(char *str)
{
	int		i;
	int		k;
	char	a;

	i = 0;
	k = 0;
	a = '0';
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	i = i - 1;
	while (i > k)
	{
		a = str[k];
		str[k] = str[i];
		str[i] = a;
		i = i - 1;
		k = k + 1;
	}
	return (str);
}