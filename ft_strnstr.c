/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:54:18 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/07 16:01:33 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (0);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while ((big[i] != 0) && (i < len))
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len))
		{
			if (j == ft_strlen(little) - 1)
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
