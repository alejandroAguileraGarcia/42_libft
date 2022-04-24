/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:07:46 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/24 17:25:17 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stddef.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	p = (char *)s;
	while (*p != '\0' && *p != (char)c && i < n)
	{
		i++;
		p++;
	}
	if (*p == (char)c)
		return ((void *)p);
	return (0);
}
