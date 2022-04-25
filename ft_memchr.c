/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:07:46 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/25 11:24:55 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	if (n == 0)
		return (0);
	p = (unsigned char *)s;
	i = 0;
	while (p[i] != (unsigned char)c && i < n - 1)
		i++;
	if (p[i] == (unsigned char)c)
		return ((void *)p + i);
	return (0);
}
