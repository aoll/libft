#include "libft.h"

/*
** ft_array_str_new - return a pointeur to a new array of char *
*/

char **ft_array_str_new(const size_t size)
{
  char **new_array;
  size_t x;

  x = 0;
  new_array = NULL;
  if (size <= 0)
    return (NULL);
  if (!(new_array = (char **)malloc(sizeof(char *) * (size + 1))))
    return (NULL);
  new_array[size] = NULL;
  while (x < size)
  {
    new_array[x] = NULL;
    x++;
  }
  return (new_array);
}
