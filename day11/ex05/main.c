#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);

int main(int argc, char **argv)
{
	t_list *x;

	x = ft_list_push_params(argc, argv);
	while (1)
	{
		printf("%s\n", x->data);
		if (x->next == (void *)0)
			break ;
		x = x->next;
	}
	return (0);
}
