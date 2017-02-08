#include "libft.h"

/*
** return - a new t_arr * copyed from the old
*/

t_arr  *ft_arr_dup(t_arr *old)
{
  t_arr *new;
  int index;
  unsigned char *tmp;

  if (!old)
    return (NULL);
  if (!(new = ft_arr_new(old->length, old->sizeof_elem)))
    return (NULL);
  new->f_print = old->f_print;
  new->f_cpy = old->f_cpy;
  new->f_cmp = old->f_cmp;
  new->f_dup_elem = old->f_dup_elem;
  new->f_del = old->f_del;
  tmp = old->ptr;
  index = 0;
  while (index < (int)old->length)
  {
    if (tmp)
    {
      ft_arr_push(new, old->f_dup_elem(tmp, old->sizeof_elem), -1);
      tmp += old->sizeof_elem;
    }
    index++;
  }
  return (new);
}
