#include <stdio.h>
#include <stdlib.h>

int	ft_is_sort(int *tab, int length, int(*f)(int, int));

int compare(int n1, int n2)
{
	return (n1 - n2);
}

int main(void)
{
  int nbrs[] = {1, 2, 3, 4};
	printf("%d\n", ft_is_sort(nbrs, 4, &compare));
  return (0);
}
