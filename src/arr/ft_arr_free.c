#include "libft.h"

/*
** free all elem present ptr with f_del on each, on after free arr
*/

void  ft_arr_free(t_arr *arr)
{
  int i;
  t_arr *tmp;
  unsigned char *ptr;

  tmp = arr;
  ptr = tmp->ptr;
  i = 0;
  while (i < (int)tmp->length)
  {
    tmp->f_del((void **)ptr);
    ptr += tmp->sizeof_elem;
    i++;
  }
  free(tmp->ptr);
  free(tmp);
  return;
}
