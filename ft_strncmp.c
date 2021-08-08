/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:14:59 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/07 13:56:58 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	i;

	i = 0;
	if (num == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < num - 1)
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
