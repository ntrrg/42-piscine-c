#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);
int	ft_list_size(t_list *begin_list);
void		ft_list_push_front(t_list **begin_list, void *data);

int main()
{
	t_list *x;

	x = ft_create_elem("Miguel");
	ft_list_push_front(&x, "Angel");
	ft_list_push_front(&x, "Rivera");
	ft_list_push_front(&x, "Notararigo");
	printf("%s\n", x->data);
	printf("%s\n", x->next->data);
	printf("%s\n", x->next->next->data);
	printf("%s\n", x->next->next->next->data);
	printf("%d\n", ft_list_size(x));
	return (0);
}
