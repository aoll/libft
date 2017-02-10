/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 12:37:31 by alex              #+#    #+#             */
/*   Updated: 2017/02/08 12:40:08 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * free and set to null a char *
 */
void  ft_str_free(void *str)
{
  char *s;
  char **ptr;

  if (!str)
    return;
  s = *(char **)str;
  if (!s)
    return;
  free(s);
  ptr = (char **)str;
  *ptr = NULL;
  return;
}
