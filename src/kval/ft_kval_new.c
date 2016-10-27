#include "libft.h"

/*
** return a new ptr to a struct t_kval else NULL
*/

t_kval  *ft_kval_new(void)
{
  t_kval  *new;

  if (!(new = malloc(sizeof(t_kval))))
    return (NULL);
  new->key = NULL;
  new->value = NULL;
  return (new);
}
