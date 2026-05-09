/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 13:19:22 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/30 13:36:32 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
// int	main(void)
// {
// 	int *arr = ft_calloc(5, sizeof(int));
// 	for (int i = 0; i < 5; i++)
// 		printf("calloc[%d] = %d\n", i, arr[i]);
// 	free(arr);
// }