#include "libft.h"

/*
** push a elem to arr->ptr in function of this index give in parameter
** if index < 0 the new elem is push to end
** if index >= 0 arr->ptr's length the elem is push to index
** front or end, if the new size with the futur new elem, it's realoc time with\
** actual alloc_lenght * 2
*/

int  ft_arr_push(t_arr **arr, const void *to_push, int index)
{
  t_arr *tmp;
  unsigned char *ptr;

  if (!arr || !(*arr) || !to_push)
    return (EXIT_FAILURE);
  // ft_putstr((char *)to_push);
  // ft_putstr(" :added\n");
  tmp = *arr;
  index = index < 0 ? (int)tmp->length : index;
  index = index > (int)tmp->length ? (int)tmp->length : index;
  if ((tmp->length + 1) * tmp->sizeof_elem > tmp->alloc_len)
  {
    if (!(tmp->ptr = ft_memrealloc(tmp->ptr, tmp->alloc_len, tmp->alloc_len * MULTI_LENGHT_ARRAY)))
      return (EXIT_FAILURE);
    tmp->alloc_len *= MULTI_LENGHT_ARRAY;
  }
  ptr = (unsigned char *)tmp->ptr + (index * tmp->sizeof_elem);
  ft_memmove((unsigned char *)ptr + tmp->sizeof_elem, ptr,\
  tmp->sizeof_elem * (tmp->length - index));
  tmp->f_cpy((ptr), &to_push, tmp->sizeof_elem);
  tmp->length++;
  return (EXIT_SUCCESS);
}
