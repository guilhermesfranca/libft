/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 10:59:42 by gfranca           #+#    #+#             */
/*   Updated: 2026/05/04 11:12:45 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	len = -1;
	while (s[++len])
		ptr[len] = f(len, s[len]);
	ptr[len] = '\0';
	return (ptr);
}

/*também fiz assim, mas a versao atual é mais otimizada:
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(s);
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = -1;
	while (s[++i])
		ptr[i] = f(i, s[i]);
	ptr[i] = '\0';
	return (ptr);
}

	*/