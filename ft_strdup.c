/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:05:21 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/30 13:36:28 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;
	size_t	i;

	size = ft_strlen(s);
	ptr = malloc(size * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		ptr[i] = s[i];
		i++;
	}
	return (ptr);
}
// int main(void)
// {
// char *s1 = "hello";
// char *copy = ft_strdup(s1);
// printf("strdup: %s\n", copy);
// }