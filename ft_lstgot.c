#include "libft.h"

BOOL ft_lstgot(t_list *list, t_list *elem)
{
  while (list)
  {
    if (list == elem)
      return (TRUE);
    list = list->next;
  }
  return (FALSE);
}
