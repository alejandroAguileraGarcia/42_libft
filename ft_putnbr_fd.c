/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 15:55:26 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/23 18:30:18 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <unistd.h>

int	negative(int nb, int fd)
{
	if (nb == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
	}
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	else if (nb == 0)
	{
		ft_putchar_fd('0', fd);
	}
	return (nb);
}

int	ncifras(int nb)
{
	int	cifras;

	cifras = 0;
	while (nb > 0)
	{
		cifras++;
		nb /= 10;
	}
	return (cifras);
}

int	pow2(int n, int n2)
{
	int	i;

	if (n2 == 0)
	{
		return (1);
	}
	i = 0;
	while (i < (n2 - 1))
	{
		n = n * 10;
		i++;
	}
	return (n);
}

void	ft_putnbr_fd(int nb, int fd)
{
	int	cifras;
	int	i;
	int	cifras_aux;
	int	cifra_imp;

	nb = negative(nb, fd);
	cifras = ncifras(nb);
	cifras_aux = cifras;
	i = 0;
	while (i < cifras)
	{
		cifra_imp = nb / pow2(10, cifras_aux - 1);
		nb = nb % pow2(10, cifras_aux - 1);
		cifras_aux--;
		cifra_imp += 48;
		write(fd, &cifra_imp, 1);
		i++;
	}
}
