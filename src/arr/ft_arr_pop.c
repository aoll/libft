#include "libft.h"

int  ft_arr_pop(t_arr **arr, int index)
{
  t_arr *tmp;
  unsigned char *ptr;
  unsigned char *ptr_tmp;

  if (!arr || !(*arr))
    return (EXIT_FAILURE);
  tmp = *arr;
  if (!tmp->length)
    return (EXIT_SUCCESS);
  index = index < 0 ? 0 : index;
  index = index > (int)tmp->length ? (int)tmp->length : index;
  ptr = tmp->ptr + (index * tmp->sizeof_elem);
  ft_bzero(ptr, tmp->sizeof_elem);
  if (index < (int)tmp->length)
  {
    ptr_tmp = tmp->ptr + (index + 1) * tmp->sizeof_elem;
    tmp->f_cpy(ptr, ptr_tmp, tmp->sizeof_elem * (tmp->length - index - 1));
  }
  tmp->length--;
  return (EXIT_SUCCESS);
}
