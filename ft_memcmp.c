/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:09:31 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/23 14:30:31 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s12;

	i = 0;
	s11 = (unsigned char *)s1;
	s12 = (unsigned char *)s2;
	while (i < n && s11[i] == s12[i])
		i++;
	if (i >= n)
		return (0);
	return (s11[i] - s12[i]);
}
