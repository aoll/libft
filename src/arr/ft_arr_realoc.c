#include "libft.h"

t_arr  *ft_arr_realoc(t_arr *old)
{
  t_arr *new;
  t_arr *tmp;

  if (!old)
    return (NULL);
  tmp = old;
  if (!(new = ft_arr_new(old->alloc_len / old->sizeof_elem, old->sizeof_elem)))
    return (NULL);
  ft_memcpy(new->ptr, tmp->ptr, tmp->length * tmp->sizeof_elem);
  new->length = tmp->length;
  new->f_cpy = tmp->f_cpy;
  new->f_print = tmp->f_print;
  new->f_del = tmp->f_del;
  return (new);
}
