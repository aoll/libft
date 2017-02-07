#include "libft.h"

/**
 * add every c from a string and add at the end of a t_arr like string
 */
int  ft_arr_str(t_arr *arr, const char *str)
{
  char *char_line;

  char_line = ft_strnew(8);
  while (*str)
  {
    *char_line = *str;
    ft_arr_push(&arr, ft_strdup(char_line), -1);
    *char_line = '\0';
    str++;
  }
  free(char_line);
  return (EXIT_SUCCESS);
}
