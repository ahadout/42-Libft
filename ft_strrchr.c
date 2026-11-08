/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 22:12:45 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/28 21:52:54 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	int				i;

	i = ft_strlen(s);
	ch = (unsigned char)c;
	while (i >= 0 && s[i] != ch)
		i--;
	if (i >= 0)
		return ((char *)&s[i]);
	else
		return (NULL);
}
