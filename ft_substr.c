/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:13:30 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/25 11:09:30 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sbstr;
	unsigned int	i;

	if (start >= ft_strlen(s))
	{
		sbstr = ft_calloc(1, sizeof(char));
		if (!sbstr)
			return (0);
		return (sbstr);
	}
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sbstr = ft_calloc(len + 1, sizeof(char));
	if (!sbstr)
		return (0);
	i = 0;
	while (s[start + i] && i < len)
	{
		sbstr[i] = s[start + i];
		i++;
	}
	return (sbstr);
}
