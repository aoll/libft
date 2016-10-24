#include "libft.h"

void *ft_array_sort(void *arr, size_t nb_elem, size_t sizeof_elem, func_ptr_cmp f_comp)
{
  void *tmp;

  if (!arr || !nb_elem || !sizeof_elem || !f_comp)
    return (arr);
  tmp = arr;
  while ((size_t)(tmp - arr) / sizeof_elem < nb_elem - 1)
  {
    if (f_comp((const void *)(tmp),\
    (const void *)((tmp + sizeof_elem)), sizeof_elem) > 0)
    {
      ft_swap((void *)(tmp), (void *)((tmp + sizeof_elem)), sizeof_elem);
      tmp = arr;
    }
    else
      tmp += sizeof_elem;
    }
    return (arr);
}
