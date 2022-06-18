/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:16:37 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/18 16:17:43 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len_src;
	char	*dup;

	i = 0;
	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	dup = (char *)malloc(sizeof(*src) * (len_src + 1));
	if (dup == 0)
		return (NULL);
	while (i < len_src)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
