/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 12:29:29 by alex              #+#    #+#             */
/*   Updated: 2017/02/09 09:50:38 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_array_free - free and set to null a array char **
*/

void  ft_array_free(void *array)
{
  char **tab;
  int i;

  if (!array)
    return;
  tab = *(char **)array;
  if (!tab)
    return;
  if (!*tab)
    return;
  i = 0;
  while (tab[i])
  {
    free(tab[i]);
    i++;
  }
  free(tab);
  tab = NULL;
  tab = (char ***)array;
  *tab = NULL;
  return;
}
