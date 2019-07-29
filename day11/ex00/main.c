#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int main()
{
	t_list *x;
	t_list *y;

	x = ft_create_elem("Miguel");
	printf("%s\n", x->data);

	y = ft_create_elem("Angel");
	x->next = y;
	printf("%s\n", y->data);
	printf("%s\n", x->next->data);
	return (0);
}
