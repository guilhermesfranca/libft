/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:25:26 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/26 19:47:02 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len)
		return (size + src_len);
	while (i < size - dst_len - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// int	main(void)
// {
// 	char str1[20];
// 	char str2[] = " teste";

// 	strcpy(str1, "teste");
// 	printf("%zu\n", ft_strlcat(str1, str2, 20));
// 	strcpy(str1, "teste");
// 	printf("%zu\n", ft_strlcat(str1, str2, 7));
// 	strcpy(str1, "teste");
// 	printf("%zu\n", ft_strlcat(str1, str2, 3));
// }
