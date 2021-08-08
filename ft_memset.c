/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:29:05 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/05 14:29:06 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int val, size_t count)
{
	unsigned char	*bufz;

	bufz = (unsigned char *)buf;
	while (count > 0)
	{
		bufz[count - 1] = val;
		count--;
	}
	return (buf);
}
