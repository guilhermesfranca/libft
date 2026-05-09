/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 09:00:39 by gfranca           #+#    #+#             */
/*   Updated: 2026/05/04 09:08:32 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	if (!s1[0])
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	s2 = malloc((end - start + 2) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (start <= end)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}
/*
int main(void)
{
	char a[] = "  teste de trim   ";
	printf("%s\n",ft_strtrim(a," "));
}*/