#include "libft.h"

/*
** return the index if the element to_find is present is the arr else -1
*/

int  ft_arr_indexof(const t_arr *arr, const void *to_find)
{
  size_t index;
  const t_arr *tmp;
  unsigned char *ptr;

  if (!arr || !to_find)
    return (-1);
  index = 0;
  tmp = arr;
  ptr = tmp->ptr;
  while (index < tmp->length)
  {
    if (!tmp->f_cmp((const void *)ptr, to_find, tmp->sizeof_elem))
    {
      return (index);
    }
    ptr += tmp->sizeof_elem;
    index++;
  }
  return (-1);
}
