#include "libft.h"

/*
** print all char * from char **
*/

void  ft_array_str_print(const char **s)
{
  while (*s)
  {
    ft_putstr(*s);
    ft_putchar('\n');
    break;
    s++;
  }
  return;
}
