/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:02:12 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/27 23:18:11 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hst, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (!ndl[0])
		return ((char *)hst);
	i = 0;
	while (hst[i] && i < len)
	{
		j = 0;
		while (ndl[j] && i + j < len && hst[i + j] == ndl[j])
			j++;
		if (ndl[j] == '\0')
			return ((char *)&hst[i]);
		i++;
	}
	return (NULL);
}
