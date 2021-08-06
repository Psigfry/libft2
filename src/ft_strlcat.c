/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 18:19:05 by Psigfry           #+#    #+#             */
/*   Updated: 2021/07/13 18:19:48 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	r;

	i = 0;
	j = -1;
	while (dst[i] && i < size)
		++i;
	r = ft_strlen(src);
	while ((src[++j]) && ((i + j + 1) < size))
		dst[i + j] = src[j];
	if (i != size)
		dst[i + j] = '\0';
	return (i + r);
}
