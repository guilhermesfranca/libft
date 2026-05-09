/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 19:24:54 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/26 20:21:22 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	printf("%d\n",ft_isalpha(':'));
// 	printf("%d\n",ft_isalpha('0'));
// 	printf("%d\n",ft_isalpha('s'));
// 	printf("%d\n",!ft_isalpha('a' - 1));
// }