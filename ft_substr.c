/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:38:15 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/30 14:49:42 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	j = start;
	while (i < len && s[j + i])
	{
		ptr[i] = s[j + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
