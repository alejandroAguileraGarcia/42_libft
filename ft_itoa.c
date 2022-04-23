/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:40:03 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/23 14:17:27 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	n_cifras(long n)
{
	long	i;

	i = 0;
	if (n < 0)
		i++;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_cif;
	int		neg;
	long	n2;

	n2 = (long)n;
	neg = 0;
	n_cif = n_cifras(n2);
	if (n2 < 0)
	{
		n2 *= -1;
		neg = 1;
	}
	str = ft_calloc (n_cif + 1, sizeof(char));
	if (!str)
		return (0);
	str[n_cif--] = '\0';
	while (n_cif >= 0)
	{
		str[n_cif--] = n2 % 10 + '0';
		n2 /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
