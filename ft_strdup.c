/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahadout <mahadout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 23:03:30 by mahadout          #+#    #+#             */
/*   Updated: 2026/10/18 17:27:38 by mahadout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ps1;
	int		s1_len;
	int		i;

	s1_len = ft_strlen(s1);
	ps1 = malloc(s1_len * sizeof(char) + 1);
	i = 0;
	if (!ps1)
		return (NULL);
	while (i <= s1_len)
	{
		ps1[i] = s1[i];
		i++;
	}
	return (ps1);
}
