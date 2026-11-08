/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 23:22:56 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/20 23:42:06 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*pmalloc;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	i = 0;
	pmalloc = malloc(len + 1);
	if (!pmalloc)
		return (NULL);
	while (i < len)
	{
		pmalloc[i] = f(i, s[i]);
		i++;
	}
	pmalloc[i] = '\0';
	return (pmalloc);
}
