/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 03:33:18 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/07/14 03:29:09 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_split(char const *s, char c)
{
	int	i;
	int	count;
	int	aux;

	i = 0;
	count = 0;
	aux = 0;
	while (s[i])
	{
		if (s[i] == c && aux == 1)
			aux = 0;
		if (s[i] != c && aux == 0)
		{
			count ++;
			aux = 1;
		}
		i ++;
	}
	return (count);
}

static int	ft_array(char const *s, char c, char **ptr)
{
	size_t	size;

	size = 0;
	while (s[size] != c && s[size])
		size++;
	*ptr = ft_substr(s, 0, size);
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		quantity_arr;
	size_t	index;
	size_t	p_index;

	index = 0;
	p_index = 0;
	quantity_arr = ft_count_split(s, c);
	ptr = (char **)malloc((quantity_arr + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (index < ft_strlen(s))
		{
			index += ft_array(&s[index], c, &ptr[p_index]);
			p_index ++;
		}
	}
	ptr[p_index] = NULL;
	return (ptr);
}
