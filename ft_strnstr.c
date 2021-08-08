/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:10:30 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/07 15:18:29 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	unsigned int	a;
	unsigned int	i;

	if (!*find)
		return ((char *)str);
	a = 0;
	while (str[a] != '\0' && (size_t)a < len)
	{
		if (str[a] == find[0])
		{
			i = 1;
			while (find[i] != '\0' && str[a + i] == find[i]
				&& (size_t)(a + i) < len)
				++i;
			if (find[i] == '\0')
				return ((char *)&str[a]);
		}
		++a;
	}
	return (0);
}
