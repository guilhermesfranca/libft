/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:08:04 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/28 10:29:33 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sr;

	if (!dest && !src)
		return (NULL);
	i = -1;
	dst = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (dst < sr)
	{
		while (++i < n)
			dst[i] = sr[i];
	}
	else
	{
		i = n;
		while (i-- > 0)
			dst[i] = sr[i];
	}
	return (dest);
}
