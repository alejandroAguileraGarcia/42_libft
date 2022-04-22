/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 20:41:25 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/21 09:09:55 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n_len;
	char	*hay;

	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	i = 0;
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] && needle[j] && hay [i + j] == needle[j]
			&& i + j < len)
			j++;
		if (j == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
