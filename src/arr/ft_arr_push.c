#include "libft.h"

/*
** push a elem to arr->ptr in function of this index give in parameter
** if index < 0 the new elem is push , front of arr->ptr
** if index >= arr->ptr's length the elem is push is the end
** front or end if the new size with the futur new elem, it's realoc time with \
** actual alloc_lenght * 2
*/

int  ft_arr_push(t_arr **arr, const void *to_push, int index)
{
  t_arr *tmp;
  t_arr *tmp_for_free;
  unsigned char *ptr;

  if (!arr || !(*arr))
    return (EXIT_FAILURE);
  tmp = *arr;
  index = index < 0 ? -1 : index;
  index = index > (int)tmp->length ? (int)tmp->length : index;
  ptr = tmp->ptr + (index * tmp->sizeof_elem);
  if (((size_t)ptr < (size_t)tmp->start) ||\
  ((size_t)ptr  >= (size_t)(tmp->start + tmp->alloc_len)))
  {
    tmp_for_free = *arr;
    if (!(tmp = ft_arr_realoc(tmp)))
      return (EXIT_FAILURE);
    tmp->f_del(&(tmp_for_free->start));
    free(*arr);
    *arr = tmp;
    ptr = tmp->ptr + (index * tmp->sizeof_elem);
  }
  tmp->f_cpy((ptr), to_push, tmp->sizeof_elem);
  tmp->length++;
  if (index < 0)
    tmp->ptr = ptr;
  return (EXIT_SUCCESS);
}
