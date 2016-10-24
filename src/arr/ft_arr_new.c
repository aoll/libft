#include "libft.h"

/*
** return a new poiteur t_arr with a new void *
** the real alloc length is the length past in parameter * 2 * sizeof_elem
*/

t_arr  *ft_arr_new(const size_t length, const size_t sizeof_elem)
{
  t_arr *arr_ptr;

  if (!length || !sizeof_elem)
    return (NULL);
  if (!(arr_ptr = malloc(sizeof(t_arr))))
    return (NULL);
  arr_ptr->length = 0;
  arr_ptr->alloc_len = sizeof_elem * (length * MULTI_LENGHT_ARRAY);
  arr_ptr->sizeof_elem = sizeof_elem;
  if (!(arr_ptr->ptr = malloc(arr_ptr->alloc_len)))
    return (NULL);
  ft_bzero(arr_ptr->ptr, arr_ptr->alloc_len);
  arr_ptr->start = arr_ptr->ptr;
  arr_ptr->ptr += length * MULTI_LENGHT_ARRAY / 4 * sizeof_elem;
  arr_ptr->f_cpy = &ft_memcpy;
  arr_ptr->f_del = &ft_memdel;
  return (arr_ptr);
}
