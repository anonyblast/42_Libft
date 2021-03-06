/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:28:14 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/18 16:28:23 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_s1;
	unsigned int	len_s2;
	char			*join;

	if (s1 && s2)
	{
		len_s1 = ft_strlen(s1);
		len_s2 = ft_strlen(s2);
		join = (char *)malloc(sizeof(*join) * (len_s1 + len_s2 + 1));
		if (join == NULL)
			return (NULL);
		i = 0;
		j = 0;
		while (i < len_s1)
			join[j++] = s1[i++];
		i = 0;
		while (i < len_s2)
			join[j++] = s2[i++];
		join[j] = '\0';
		return (join);
	}
	return (NULL);
}
