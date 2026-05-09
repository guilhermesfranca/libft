/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 00:29:28 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/26 19:44:55 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char c;
// 	char res;
// 	c = ':';
// 	res = ft_tolower((unsigned char)c);
// 	printf("A letra antes era: %c\n", c);
// 	printf("A letra depois é: %c\n", res);
// }