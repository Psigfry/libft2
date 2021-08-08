/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:15:28 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/07 14:27:51 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	if (num == 0)
		return (0);
	s1 = (unsigned char *) memptr1;
	s2 = (unsigned char *) memptr2;
	while (*s1 == *s2 && ++i < num)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1 - *s2));
}
