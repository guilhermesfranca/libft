/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:38:02 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/26 19:38:03 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	printf("%d\n",isascii('0'));
// 	printf("%d\n",isascii('0'));
// 	printf("%d\n",isascii('s'));
// }