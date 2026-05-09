/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:45:16 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/26 19:45:17 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	printf("%d\n",ft_isdigit(':'));
// 	printf("%d\n",ft_isdigit('9'));
// 	printf("%d\n",ft_isdigit('5'));
// }