/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 08:29:21 by aaguiler          #+#    #+#             */
/*   Updated: 2022/04/22 18:24:30 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*rtr;

	rtr = malloc(count * size);
	if (!rtr)
		return (0);
	ft_bzero (rtr, count * size);
	return (rtr);
}
