#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
t_list	*ft_list_last(t_list *begin_list);
void		ft_list_push_front(t_list **begin_list, void *data);

int main()
{
	t_list *x;

	x = ft_create_elem("Miguel");
	ft_list_push_front(&x, "Angel");
	ft_list_push_front(&x, "Rivera");
	ft_list_push_front(&x, "Notararigo");
	printf("%s\n", ft_list_last(x)->data);
	return (0);
}
