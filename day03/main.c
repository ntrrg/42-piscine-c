#include <stdio.h>

void	ft_putstr(char *c);
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putaddr(void *p);

int		main(void)
{
	ft_putstr("Hello!\n");
	return (0);
}

void	ft_putchar(char c)
{
	printf("%c", c);
}

void	ft_putnbr(int n)
{
	printf("%d", n);
}

void	ft_putaddr(void *p)
{
	printf("%p", p);
}
