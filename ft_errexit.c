#include <stdlib.h>
#include "libft.h"

void ft_errexit(char *str)
{
  ft_putendl_fd(str, 2);
  exit(EXIT_FAILURE);
}
