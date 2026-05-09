/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:00:06 by gfranca           #+#    #+#             */
/*   Updated: 2026/04/25 00:28:01 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n",ft_isalnum(':'));
// 	printf("%d\n",ft_isalnum('2'));
// 	printf("%d\n",ft_isalnum('s'));
// }
