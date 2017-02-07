#include "libft.h"

/*
** ft_array_free - free and set to null a array char **
*/

void  ft_array_free(void ***array)
{
  char **tab;
  int i;

  if (!array)
  {
    return;
  }
  tab = *(char **)array;
  i = 0;
  while (tab[i])
  {
    free(tab[i]);
    i++;
  }
  free(tab);
  return;
}
