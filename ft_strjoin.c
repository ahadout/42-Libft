/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 22:50:10 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/28 22:26:27 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	sublen;
	size_t	i;
	size_t	j;
	char	*pmalloc;

	sublen = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	pmalloc = malloc((sublen + 1) * sizeof(char));
	if (!pmalloc)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		pmalloc[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		pmalloc[i] = s2[j];
		j++;
		i++;
	}
	pmalloc[i] = '\0';
	return (pmalloc);
}
