/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusluiz- <gusluiz-@student.42sp.org.br     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 03:45:23 by gusluiz-          #+#    #+#             */
/*   Updated: 2022/07/08 03:45:57 by gusluiz-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_dig(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		n *= -1;
		c++;
	}
	while (n >= 10)
	{
		n /= 10;
		c++;
	}
	if (n < 10)
		c++;
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup ("-2147483648"));
	str = malloc((ft_count_dig(n)) + 1);
	if (!str)
		return (NULL);
	i = ft_count_dig(n) - 1;
	str[i + 1] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	if (n <= 9)
		str[i] = n + '0';
	return (str);
}
