/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 21:02:55 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/18 17:19:54 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pcalloc;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	if (size != 0 && count > ((size_t) - 1) / size)
		return (NULL);
	pcalloc = malloc(count * size);
	if (!pcalloc)
		return (NULL);
	ft_bzero(pcalloc, count * size);
	return (pcalloc);
}
