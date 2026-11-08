/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 21:08:21 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/17 19:37:48 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*pdst;
	unsigned char	*psrc;

	if (dstsize == 0)
		return (ft_strlen(src));
	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (*psrc && --dstsize)
		*pdst++ = *psrc++;
	*pdst = '\0';
	return (ft_strlen(src));
}
