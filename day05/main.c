#include <stdio.h>

int ft_is_prime(int nb);

int	main()
{
	printf("%d: %d\n", -2, ft_is_prime(-2));
	printf("%d: %d\n", 0, ft_is_prime(0));
	printf("%d: %d\n", 1, ft_is_prime(1));
	printf("%d: %d\n", 2, ft_is_prime(2));
	printf("%d: %d\n", 3, ft_is_prime(3));
	printf("%d: %d\n", 4, ft_is_prime(4));
	printf("%d: %d\n", 5, ft_is_prime(5));
	printf("%d: %d\n", 6, ft_is_prime(6));
	printf("%d: %d\n", 7, ft_is_prime(7));
	printf("%d: %d\n", 8, ft_is_prime(8));
	printf("%d: %d\n", 9, ft_is_prime(9));
	printf("%d: %d\n", 20, ft_is_prime(20));
	printf("%d: %d\n", 21, ft_is_prime(21));
	printf("%d: %d\n", 22, ft_is_prime(22));
	printf("%d: %d\n", 23, ft_is_prime(23));
	printf("%d: %d\n", 24, ft_is_prime(24));
	printf("%d: %d\n", 2147483647, ft_is_prime(2147483647));
	return (0);
}
