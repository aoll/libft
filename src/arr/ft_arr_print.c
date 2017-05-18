/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 16:59:43 by aollivie          #+#    #+#             */
/*   Updated: 2017/05/18 17:00:54 by aollivie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** pass on each elem to ptr an apply a print function
*/

void	ft_arr_print(const t_arr *arr)
{
	int				i;
	t_arr			*tmp;
	unsigned char	*ptr;
	void			*elem;

	if (!arr)
		return ;
	tmp = arr;
	ptr = tmp->ptr;
	i = 0;
	while (i < (int)tmp->length)
	{
		elem = (void *)((unsigned char *)tmp->ptr + i * tmp->sizeof_elem);
		tmp->f_print(elem);
		i++;
	}
	return ;
}
