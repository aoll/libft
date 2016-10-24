/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 22:12:40 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:34:09 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	// size_t i;
	//
	// i = 0;
	// while (i < n)
	// {
	// 	((unsigned char )dst)[i] = ((unsigned char )src)[i];
	// 	i++;
	// }
	// return (dst);
		char		*dswap;
		const char	*sswap;

		dswap = dest;
		sswap = src;
		if (dest != src)
		while (n--)
			*dswap++ = *sswap++;
		return (dest);
}
