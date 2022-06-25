/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:31:34 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/25 20:03:33 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (start == end)
	{
		str = ft_substr(s1, start, 1);
		return (str);
	}
	while (end && ft_strchr(set, s1[end]))
		end--;
	str = ft_substr(s1, start, (end - start + 1));
	return (str);
}
