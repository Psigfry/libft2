/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:27:23 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/05 15:36:13 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	int	len;

	len = ft_strlen((char *)str);
	while (0 != len && str[len] != (char)s)
		len--;
	if (str[len] == (char)s)
		return ((char *)&str[len]);
	return (NULL);
}
