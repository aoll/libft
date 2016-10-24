#include "libft.h"

/*
** ft_array_free - free and set to null a array char **
*/

void  ft_array_free(void ***array)
{
  void **tmp;
  void ***t;

  if (array == NULL)
    return;
  t = array;
  tmp = *t;
  if (!tmp)
    return;
  while (*tmp) {
    if (*tmp) {
      ft_putstr(*tmp);
      ft_putstr("\n");
      free(*tmp);
      *tmp = NULL;
    }
    tmp++;
  }
  free(*array);
  *array = NULL;
  return;
}
