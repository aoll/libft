#include "libft.h"

/**
 * set the value value of a struct kval
 */
int  ft_kval_set_value(t_kval *kval, const char *value)
{
  if (!value)
  {
    return (EXIT_SUCCESS);
  }
  if (kval->value)
  {
    free(kval->value);
  }
  if (!(kval->value = ft_strdup(value)))
  {
    return (EXIT_FAILURE);
  }
  return (EXIT_SUCCESS);
}
