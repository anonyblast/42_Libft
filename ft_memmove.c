/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 18:25:12 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/29 18:57:30 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;

	p_src = (unsigned char *)src + (n - 1);
	p_dest = (unsigned char *)dest + (n - 1);
	if (p_dest > p_src)
		while (n--)
			*p_dest-- = *p_src--;
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
