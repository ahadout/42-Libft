/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 19:22:01 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/28 22:23:35 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sublen;
	size_t	strlen;
	char	*pmalloc;

	if (!s)
		return (NULL);
	strlen = ft_strlen(s);
	if (start >= strlen)
		sublen = 0;
	else if (len > strlen - start)
		sublen = strlen - start;
	else
		sublen = len;
	pmalloc = malloc((sublen + 1) * sizeof(char));
	if (!pmalloc)
		return (NULL);
	i = 0;
	while (i < sublen)
	{
		pmalloc[i] = s[start + i];
		i++;
	}
	pmalloc[i] = '\0';
	return (pmalloc);
}
