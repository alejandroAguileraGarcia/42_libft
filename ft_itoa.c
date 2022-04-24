/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:40:03 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/23 18:48:23 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	n_cifras(long n)
{
	long	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_fill_array(int n_cif, long n2, char *str, int neg)
{
	n_cif--;
	while (n_cif >= 0)
	{
		str[n_cif] = n2 % 10 + '0';
		n2 /= 10;
		n_cif--;
	}
	if (neg)
		str[0] = '-';
}

void	ft_negative(long *n2, int *neg)
{
	if (*n2 < 0)
	{
		*n2 *= -1;
		*neg = 1;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_cif;
	int		neg;
	long	n2;

	if (n == 0)
	{
		str = ft_calloc (2, sizeof(char));
		if (!str)
			return (0);
		str[0] = '0';
		return (str);
	}
	n2 = n;
	neg = 0;
	n_cif = n_cifras(n2);
	ft_negative(&n2, &neg);
	str = ft_calloc (n_cif + 1, sizeof(char));
	if (!str)
		return (0);
	ft_fill_array(n_cif, n2, str, neg);
	return (str);
}
