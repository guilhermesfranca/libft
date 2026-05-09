/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 00:29:42 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/25 00:29:43 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char c;
// 	char res;
// 	c = 'a';
// 	res = ft_toupper((unsigned char)c);
// 	printf("A letra antes era: %c\n", c);
// 	printf("A letra depois é: %c\n", res);
// }
