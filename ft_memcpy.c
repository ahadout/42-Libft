/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:54:46 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/28 21:43:55 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*psrc;
	unsigned char	*pdst;
	size_t			i;

	i = 0;
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}
