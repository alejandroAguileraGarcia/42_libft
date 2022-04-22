/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 09:13:30 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/21 09:26:22 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sbstr;
	unsigned int	i;

	sbstr = malloc(len);
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
