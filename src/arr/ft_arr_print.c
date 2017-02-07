#include "libft.h"

/*
** pass on each elem to ptr an apply a print function
*/

void  ft_arr_print(const t_arr *arr)
{
  int i;
  t_arr *tmp;
  unsigned char *ptr;
  void *elem;

  if (!arr)
    return;
  tmp = arr;
  ptr = tmp->ptr;
  i = 0;
  while (i < (int)tmp->length)
  {
    elem = (void *)((unsigned char *)tmp->ptr + i * tmp->sizeof_elem);
    tmp->f_print(elem);
    // ptr += tmp->sizeof_elem;
    i++;
  }
  // while (i < (int)tmp->length)
  // {
  //   tmp->f_print(ptr);
  //   ptr += tmp->sizeof_elem;
  //   i++;
  // }
  return;
}
