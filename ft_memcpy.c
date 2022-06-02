/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:35:29 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/02 02:34:01 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	const unsigned char	*c_src;
	size_t				i;

	c_dest = (unsigned char *) dest;
	c_src = (const unsigned char *) src;
	i = 0;
	while (i < n && c_dest != NULL && c_src != NULL)
	{	
		c_dest[i] = c_src[i];
		i ++;
	}
	return (dest);
}
