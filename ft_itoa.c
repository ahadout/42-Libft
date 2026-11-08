/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:17:30 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/28 22:38:22 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(long n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*pmalloc;
	long	nb;

	nb = n;
	len = int_len(nb) + 1;
	pmalloc = malloc(len);
	if (!pmalloc)
		return (NULL);
	if (nb < 0)
	{
		pmalloc[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		pmalloc[0] = '0';
	pmalloc[--len] = '\0';
	while (nb > 0)
	{
		len--;
		pmalloc[len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (pmalloc);
}
