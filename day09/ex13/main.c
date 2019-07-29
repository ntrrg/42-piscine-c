#include <stdio.h>
#include <stdlib.h>

int	ft_compact(char **tab, int length);

int main(void)
{
	tab = (char **)malloc(sizeof(*tab) * 4);
	tab[0] = "Miguel";
	tab[1] = (void *)0;
	tab[2] = "Rivera";
	tab[3] = "Notararigo";
	printf("%d\n", ft_compact(tab));
	printf("%s\n", ft_compact(tab[1]));
	return (0);
}
