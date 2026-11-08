/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 22:05:47 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/29 19:12:30 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	count;
	int	i;
	int	found;

	found = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			found = 0;
		else if (found == 0)
		{
			found = 1;
			count++;
		}
		i++;
	}
	return (count);
}

int	word_len(char const *s, char c)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

void	ft_free(char **arr, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * ((word_count(s, c)) + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			arr[j] = ft_substr(&s[i], 0, word_len(&s[i], c));
			if (!arr[j])
				return (ft_free(arr, j), NULL);
			j++;
			i += word_len(&s[i], c);
		}
		else
			i++;
	}
	return (arr[j] = 0, arr);
}
