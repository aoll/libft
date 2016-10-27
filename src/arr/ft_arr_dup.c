#include "libft.h"

/*
** return - a new t_arr * copyed from the old
*/

t_arr  *ft_arr_realoc(t_arr *old)
{
  t_arr *new;

  if (!old)
    return (NULL);
  if (!(new = ft_arr_new(old->alloc_len, old->sizeof_elem)))
    return (NULL);
  ft_memcpy(new, old, sizeof(t_arr));
  return (new);
}
