#include "libft.h"

t_list *ft_lstpop(t_list **begin)
{
  t_list *elem;

  if (!begin || !*begin)
    return (NULL);
  elem = *begin;
  *begin = elem->next;
  elem->next = NULL;
  return (elem);
}
