/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:11:31 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/25 00:28:43 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n",isprint('\t'));
// 	printf("%d\n",isprint('9'));
// 	printf("%d\n",isprint(' '));
// 	printf("%d\n",isprint('L'));
// }