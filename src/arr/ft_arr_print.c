#include "libft.h"

/*
** pass on each elem to ptr an apply a print function
*/

void  ft_arr_print(const t_arr *arr)
{
  int i;
  const t_arr *tmp;
  unsigned char *ptr;

  if (!arr)
    return;
  tmp = arr;
  ptr = tmp->ptr;
  i = 0;
  while (i < (int)tmp->length)
  {
    tmp->f_print(ptr);
    ptr += tmp->sizeof_elem;
    i++;
  }
  return;
}
