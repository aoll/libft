/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:45:56 by aollivie          #+#    #+#             */
/*   Updated: 2014/11/14 18:37:50 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  ft_swap(void *a, void *b, size_t n)
{
  unsigned char tmp[n];

  ft_memcpy(&tmp, b, n);
  ft_memcpy(b, a, n);
  ft_memcpy(a, &tmp, n);
  return;
}
