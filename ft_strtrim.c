/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:37:15 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/21 12:16:42 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*s2;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(s1);
	len -= i;
	s2 = malloc(len + 1);
	if (!s2)
		return (0);
	j = 0;
	while (s1[i + j])
	{
		s2[j] = s1[i + j];
		j++;
	}
	s2[j] = '\0';
	return (s2);
}