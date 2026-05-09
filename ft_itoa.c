/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:21:57 by gfranca           #+#    #+#             */
/*   Updated: 2026/05/09 19:12:29 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digits_len(int n)
{
	size_t	i;

	i = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		d_len;
	long	num;
	char	*ptr;

	num = n;
	d_len = digits_len(n);
	if (n < 0)
	{
		num = -num;
		d_len++;
	}
	ptr = malloc((d_len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[d_len] = '\0';
	while (d_len--)
	{
		ptr[d_len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
