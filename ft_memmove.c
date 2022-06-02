/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:38:49 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/06/02 02:57:48 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	const unsigned char	*c_src;
	char				*tmp;
	size_t				i;

	c_dest = (unsigned char *) dest;
	c_src = (const unsigned char *) src;
	tmp = (char *) malloc(sizeof(char) * n);
	i = 0;
	if (tmp == NULL)
		return (NULL);
	while (i < n)
	{
		tmp[i] = c_src[i];
		i ++;
	}
	i = 0;
	while (i < n)
	{
		c_dest[i] = tmp[i];
		i ++;
	}
	free(tmp);
	return (dest);
}
