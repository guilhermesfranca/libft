/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfranca <gfranca@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 12:14:26 by gfranca           #+#    #+#             */
/*   Updated: 2026/05/09 19:58:32 by gfranca          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	count;
	int	sep;

	count = 0;
	sep = 1;
	while (*s)
	{
		if (*s != c && sep)
		{
			count++;
			sep = 0;
		}
		else if (*s == c)
			sep = 1;
		s++;
	}
	return (count);
}

static void	free_arr(char **arr, int i)
{
	while (i--)
		free(arr[i]);
	free(arr);
}

static int	is_sep(char c, char sep)
{
	return (c == sep);
}

static char	*alloc_word(const char *str, char sep)
{
	int		len;
	char	*word;
	int		i;

	len = 0;
	i = -1;
	while (str[len] && !is_sep(str[len], sep))
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (++i < len)
		word[i] = str[i];
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	arr = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (*s)
	{
		while (*s && is_sep(*s, c))
			s++;
		if (*s)
		{
			arr[i] = alloc_word(s, c);
			if (!arr[i])
				return (free_arr(arr, i), NULL);
			i++;
			while (*s && !is_sep(*s, c))
				s++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
