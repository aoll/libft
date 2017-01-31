#include "libft.h"

/**
 * set the value key of a struct kval
 */
int  ft_kval_set_key(t_kval *kval, const char *key)
{
  if (!key)
  {
    return (EXIT_SUCCESS);
  }
  if (kval->key)
  {
    free(kval->key);
  }
  if (!(kval->key = ft_strdup(key)))
  {
    return (EXIT_FAILURE);
  }
  return (EXIT_SUCCESS);
}
