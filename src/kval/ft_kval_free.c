#include "libft.h"

/*
** free the element inside the struct but not the ptr to this struct
*/

void  ft_kval_free(void **kval)
{
  t_kval *tmp;

  if (!kval)
    return;
  tmp = (t_kval *)kval;
  if (tmp->key)
    free(tmp->key);
  if (tmp->value)
    free(tmp->value);
  return;
}
