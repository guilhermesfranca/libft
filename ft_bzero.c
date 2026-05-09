/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 10:59:21 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/28 09:21:11 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
/*int main(void)
{
    char a[32] = "333";

    printf("Antes: %s\n", a);

    ft_bzero(a, 7);

    printf("Depois: %s\n", a);
	puts("***********");
	puts("memoria em bytes");
	
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);

    printf("\n");
}
*/