/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:07:46 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/22 17:52:57 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)s;
	while (*p && *p != (char)c && i < n)
	{
		i++;
		p++;
	}
	if (*p == (char)c)
		return ((void *)p);
	return (0);
}
