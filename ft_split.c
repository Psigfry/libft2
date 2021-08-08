/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:24:17 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/07 17:39:08 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_quantity_string(char const *s, char c)
{
	int		q_string;
	char	*str;

	str = (char *)s;
	q_string = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str == '\0')
			break ;
		while (*str != c && *str)
			str++;
		q_string++;
	}
	return (q_string);
}

static char	**ft_free_fresh(char **fresh, int wg)
{
	while (wg != -1)
	{
		free(fresh[wg]);
		fresh[wg] = NULL;
		wg--;
	}
	free(fresh);
	fresh = NULL;
	return (fresh);
}

static char	**ft_finish(char **fresh, int quan_s, char const *s, char c)
{
	int		i;
	int		wg;
	int		ct;
	int		sp;

	ct = 0;
	sp = 0;
	wg = 0;
	while (s[ct])
	{
		while (s[ct++] == c && s[sp++])
			ct = sp;
		if (wg == quan_s)
			break ;
		while (s[ct] != c && s[ct])
			ct++;
		fresh[wg] = (char *)malloc(sizeof(char) * (ct - sp + 1));
		if (!fresh[wg])
			return (ft_free_fresh(fresh, wg));
		i = 0;
		while (s[sp] != c && s[sp])
			fresh[wg][i++] = s[sp++];
		fresh[wg++][i] = '\0';
	}
	return (fresh);
}

char	**ft_split(char const *s, char c)
{
	char	**fresh;
	int		quan_s;

	if (!s || !c)
		return (NULL);
	quan_s = ft_quantity_string(s, c);
	fresh = (char **)malloc(sizeof(char *) * (quan_s + 1));
	if (!fresh)
		return (NULL);
	fresh[quan_s] = 0;
	return (ft_finish(fresh, quan_s, s, c));
}
