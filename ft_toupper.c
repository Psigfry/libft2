/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psigfry <darn.vr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:40:57 by Psigfry           #+#    #+#             */
/*   Updated: 2021/08/05 14:47:20 by Psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int s)
{
	if (s >= 97 && s <= 122)
		return (s - 32);
	return (s);
}