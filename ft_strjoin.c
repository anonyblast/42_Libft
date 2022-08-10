/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 03:03:57 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/07/08 03:11:47 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len_str;

	len_str = ft_strlen(s1) + ft_strlen(s2) + 1;
	joined_str = malloc(len_str);
	if (!joined_str)
		return (NULL);
	ft_strlcpy(joined_str, s1, ft_strlen(s1) + 1);
	ft_strlcat(joined_str, s2, len_str);
	return (joined_str);
}
