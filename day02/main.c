#include <unistd.h>

void	ft_print_alphabet(void); /* CHANGE THIS BY THE PROTOTYPE OF YOUR FUNCTION */
int		ft_putchar(char c);

int	main(void)
{
	ft_print_alphabet(); /* CHANGE THIS DEPENDING ON YOUR FUNCTION */
	return (0);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
