#include "libft.h"

/*
** ft_array_str_dup - return a pointeur to a copy of array from parameter
*/

char **ft_array_str_dup(const char **src)
{
  char **new_array;
  size_t index;
  size_t len;

  if (!src)
    return (NULL);
  len = 0;
  len = ft_array_len((const void **)src);
  if (!(new_array = ft_array_str_new(len)))
    return (NULL);
  index = 0;
  while (src[index]) {
    if (!(new_array[index] = ft_strdup(src[index])))
      return (NULL);
    index++;
  }
  return (new_array);
}
