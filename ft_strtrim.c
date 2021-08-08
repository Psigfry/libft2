/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:12:44 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/07 20:14:22 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	shift(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trim;
	char	*tmp;
	char	*d;

	if (!s || !set)
		return (0);
	while (shift(*s, set))
		s++;
	trim = ft_strdup(s);
	if (trim)
	{
		tmp = trim;
		d = trim + ft_strlen(trim) - 1;
		while (shift(*d, set))
			d--;
		*++d = '\0';
		trim = ft_strdup(trim);
		free(tmp);
	}
	return (trim);
}
