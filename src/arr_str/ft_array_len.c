#include "libft.h"

/*
** ft_array_len - return the size of a array
*/

size_t  ft_array_len(const void **array)
{
  size_t size;

  size = 0;
  if (!array)
    return (0);
  while (array[size]) {
    size++;
  }
  return (size);
}
