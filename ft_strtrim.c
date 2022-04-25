/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:37:15 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/25 11:45:45 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_first(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

size_t	ft_get_last(char const *s1, char const *set)
{
	size_t	k;
	size_t	i;

	i = 0;
	k = ft_strlen(s1);
	while (s1[--k] && ft_strchr(set, s1[k]))
		i++;
	return (i);
}

void	ft_asign_value(char const *s1, char *s2, size_t j, size_t len)
{
	size_t	i;

	i = 0;
	while (j < len)
		s2[i++] = s1[j++];
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*s2;

	i = ft_get_first(s1, set);
	if (i == ft_strlen(s1))
	{
		s2 = ft_calloc(2, sizeof(char));
		if (!s2)
			return (0);
		return (s2);
	}
	len = ft_strlen(s1) - (i + ft_get_last(s1, set));
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (0);
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	len += i;
	ft_asign_value (s1, s2, i, len);
	return (s2);
}
