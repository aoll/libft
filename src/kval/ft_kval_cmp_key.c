#include "libft.h"

/*
** return the diff between key and a extern element
*/

int  ft_kval_cmp_key(const void *kval,const void *key, size_t n)
{
  t_kval *tmp;

  (void)n;
  tmp = (t_kval *)kval;
  if (!tmp)
    return (-1);
  return (ft_strcmp(tmp->key, (char *)key));
}
