/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 01:41:36 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/06 01:51:41 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (!src || !*src)
		return (len);
	while (i < size - (len - 1) && src[i])
	{
		dst[i + len] = src[i];
		i ++;
	}
	dst[i + len] = '\0';
	return (i + len);
}
