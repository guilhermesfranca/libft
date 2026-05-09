/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:05:05 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/28 09:21:24 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}
/*int main(void)
{
    char a[32] = "333";

    printf("Antes: %s\n", a);

    ft_memset(a, '2', 32);

    printf("Depois: %s\n", a);

    return 0;
}
*/