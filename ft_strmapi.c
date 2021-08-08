/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:08:37 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/07 20:15:00 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = -1;
	if (!s)
		return (0);
	str = malloc((size_t)ft_strlen((char *)s) + 1);
	if (!s || !str)
		return (NULL);
	while (s[++i])
	{
		str[i] = f(i, s[i]);
	}
	str[i] = '\0';
	return (str);
}
