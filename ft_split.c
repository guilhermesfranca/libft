/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:14:26 by gfranca           #+#    #+#             */
/*   Updated: 2026/05/09 18:07:47 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	count;
	int	sep;

	count = 0;
	sep = 1;
	while (*s)
	{
		if (*s != c && sep)
		{
			count++;
			sep = 0;
		}
		else if (*s == c)
			sep = 1;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
}
